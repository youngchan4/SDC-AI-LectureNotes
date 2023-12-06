//
// Created by eddi on 23. 12. 6.
//
#include "AccountController.h"

#include <iostream>
#include <vector>

AccountController::AccountController(std::shared_ptr<AccountService> accountService) : accountService(accountService) { }

std::vector<AccountResponse> AccountController::accountRegister()
{
    std::cout << "accountController: 회원가입" << std::endl;

    accountService->regi();

    return std::vector<AccountResponse>();

}