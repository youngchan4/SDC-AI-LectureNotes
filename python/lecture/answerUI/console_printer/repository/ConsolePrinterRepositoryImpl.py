import socket
import sys
from datetime import datetime
from time import sleep

from account.service.response import AccountLoginResponse
from console_printer.repository.ConsolePrinterRepository import ConsolePrinterRepository
from console_ui.repository.ConsoleUiRepositoryImpl import ConsoleUiRepositoryImpl
from console_ui.service.ConsoleUiServiceImpl import ConsoleUiServiceImpl


class ConsolePrinterRepositoryImpl(ConsolePrinterRepository):
    __instance = None
    __sessionAccountId = -1

    def __new__(cls):
        if cls.__instance is None:
            cls.__instance = super().__new__(cls)
        return cls.__instance

    def __init__(self):
        print("TransmitterRepositoryImpl 생성자 호출")

    @classmethod
    def getInstance(cls):
        if cls.__instance is None:
            cls.__instance = cls()
        return cls.__instance



    def printConsoleUi(self, transmitQueue, receiveQueue):

        consoleUiService = ConsoleUiServiceImpl.getInstance()
        # consoleUiService.printMenu(self.__sessionAccountId)
        consoleUiService.printMenu()
        consoleUiService.processUserInput(transmitQueue)

        while True:
            if not receiveQueue.empty():
                response = receiveQueue.get()
                print(f"Received response: {response}")

                self.__responseProcessor(response)
                # sessionAccountId = self.__checkUserSession()
                consoleUiService.printMenu()

                consoleUiService.processUserInput(transmitQueue)
            else:
                sleep(0.5)

    def __responseProcessor(self, response):
        print(f"ConsolePrinterRepository - response: {response}")

        class_name = response.__class__.__name__

        if class_name == "AccountLoginResponse":
            print("Detect Login Response")

            if response.getSessionAccountId() == -1:
                return

            consoleUiRepository = ConsoleUiRepositoryImpl.getInstance()
            consoleUiRepository.setUserSession(response.getSessionAccountId())

    def __checkUserSession(self):
        consoleUiRepository = ConsoleUiRepositoryImpl.getInstance()
        consoleUiRepository.getUserSession()

