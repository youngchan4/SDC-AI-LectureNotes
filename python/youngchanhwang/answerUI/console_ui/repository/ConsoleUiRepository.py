import abc


class ConsoleUiRepository(abc.ABC):

    @abc.abstractmethod
    def saveCurrentRoutingState(self, currentState):
        pass

    @abc.abstractmethod
    def acquireCurrentRoutingState(self):
        pass

    @abc.abstractmethod
    def saveRequestFormToTransmitQueue(self):
        pass

    @abc.abstractmethod
    def restrictUserChoice(self):
        pass


    @abc.abstractmethod
    def userInputConverter(self, userChoice):
        pass


    @abc.abstractmethod
    def printMenu(self):
        pass

    @abc.abstractmethod
    def printMenuResponse(self):
        pass

