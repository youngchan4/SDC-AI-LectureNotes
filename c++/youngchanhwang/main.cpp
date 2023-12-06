#include <iostream>
#include <memory>
#include "account/controller/AccountController.h"
#include "account/service/AccountServiceImpl.h"
#include "account/repository/AccountRepository.h"
#include "account/repository/AccountRepositoryImpl.h"

#include "ui/console/window/console_window.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto accountRepository = std::make_shared<AccountRepositoryImpl>();
    auto accountService = std::make_shared<AccountServiceImpl>(accountRepository);
    auto accountController = std::make_shared<AccountController>(accountService);
    accountController->accountRegister();


    return 0;
}
