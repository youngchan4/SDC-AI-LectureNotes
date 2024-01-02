from console_ui.service.ConsoleUiService import ConsoleUiService
from utility.keyboard.KeyboardInput import KeyboardInput
from console_ui.entity.Session import Session


class ConsoleUiServiceImpl(ConsoleUiService):
    __instance = None
    __session = None

    def __new__(cls, repository):
        if cls.__instance is None:
            cls.__instance = super().__new__(cls)
            cls.__instance.__repository = repository
        return cls.__instance

    def __init__(self, repository):
        print("ConsoleUiServiceImpl 생성자 호출")

    @classmethod
    def getInstance(cls, repository=None):
        if cls.__instance is None:
            cls.__instance = cls(repository)
        return cls.__instance

    def printMenu(self):

        self.__repository.printMenu()

    def printMenuResponse(self, response):

        self.__repository.printMenuResponse(response)

    def processUserInput(self, transmitQueue):
        restrictChoice = self.__repository.restrictUserChoice()
        while(True):
            userChoice = KeyboardInput.getKeyboardIntegerInput()
            if restrictChoice[0] <= userChoice <= restrictChoice[1]:
                break
            print("다시 입력 해주세요.")

        userChoice = self.__repository.userInputConverter(userChoice)
        self.__repository.saveCurrentRoutingState(userChoice)

        # 필요하다면 여기 중간에 몇 가지 작업들이 더 처리 될 수 있습니다.
        transmitQueue.put(userChoice)



