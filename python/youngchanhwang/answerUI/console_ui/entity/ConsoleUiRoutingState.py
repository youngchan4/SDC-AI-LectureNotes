from enum import Enum


class ConsoleUiRoutingState(Enum):
    NOTHING = 0
    ACCOUNT_LOGIN = 1
    ACCOUNT_REGISTER = 2
    ACCOUNT_LOGOUT = 3
    ACCOUNT_DELETE = 4
    PRODUCT_LIST = 5
    PRODUCT_CHECK = 6
    PRODUCT_ADD = 7
    PRODUCT_EDIT = 8
    PRODUCT_DELETE = 9
    ORDER_PURCHASE = 10
    ORDER_LIST = 11