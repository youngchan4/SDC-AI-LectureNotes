#include <iostream>
#include <memory>
#include "account/controller/AccountController.h"
#include "account/service/AccountServiceImpl.h"
#include "account/repository/AccountRepository.h"
#include "account/repository/AccountRepositoryImpl.h"

#include "ui/console/window/console_window.h"


#include "account/controller/request/AccountLoginRequestForm.h"
#include "account/controller/request/AccountRegisterRequestForm.h"

#include "singleton/Singleton.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto accountRepository = std::make_shared<AccountRepositoryImpl>();
    auto accountService = std::make_shared<AccountServiceImpl>(accountRepository);
    auto accountController = std::make_shared<AccountController>(accountService);



    Singleton* singleton = Singleton::GetInstance();
    Singleton* singleton2 = Singleton::GetInstance();

    AccountRegisterRequestForm *rr = new AccountRegisterRequestForm("아이뒤", "비밀번호");

    accountController->accountRegister(rr);

    AccountLoginRequestForm *a = new AccountLoginRequestForm("아이디", "비밀1번호");

    accountController->accountLogin(a);

    std::cout << "마무리" << std::endl;


        std::cout << singleton->GetValue() << std::endl; //5 출력
        std::cout << singleton2->GetValue() << std::endl; //5 출력
        singleton->SetValue(3);
        std::cout << singleton->GetValue() << std::endl; //3 출력
        std::cout << singleton2->GetValue() << std::endl; //3 출력


    return 0;
}
