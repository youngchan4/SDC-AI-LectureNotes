import abc


class AccountService(abc.ABC):
    @abc.abstractmethod
    def registerAccount(self, *args, **kwargs):
        pass

    @abc.abstractmethod
    def loginAccount(self, *args, **kwargs):
        pass
