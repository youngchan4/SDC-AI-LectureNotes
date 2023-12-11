#include <iostream>
#include <memory>
#include "account/controller/AccountController.h"
#include "account/service/AccountServiceImpl.h"
#include "account/repository/AccountRepository.h"
#include "account/repository/AccountRepositoryImpl.h"

#include "ui/console/window/console_window.h"


#include "account/controller/request/AccountLoginRequestForm.h"
#include "account/controller/request/AccountRegisterRequestForm.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto accountRepository = std::make_shared<AccountRepositoryImpl>();
    auto accountService = std::make_shared<AccountServiceImpl>(accountRepository);
    auto accountController = std::make_shared<AccountController>(accountService);


    AccountRegisterRequestForm *rr = new AccountRegisterRequestForm("아이뒤", "비밀번호");

    accountController->accountRegister(rr);

    AccountLoginRequestForm *a = new AccountLoginRequestForm("아이디", "비밀1번호");

    accountController->accountLogin(a);

    std::cout << "마무리" << std::endl;

    return 0;
}
