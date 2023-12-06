//
// Created by eddi on 23. 12. 6.
//

#include "AccountRepositoryImpl.h"
#include "../../mysql/DbProcess.h"



std::vector<Account> AccountRepositoryImpl::createAccount()
{
    std::cout << "AccountRepository: 회원가입" << std::endl;

    // mysql 접속
    const char* DB_HOST = "localhost";
    const char* DB_USER = "eddi";
    const char* DB_PASS = "eddi@123";
    const char* DB_NAME = "test_db";

    DbProcess db(DB_HOST, DB_USER, DB_PASS, DB_NAME);


    if (!db.connect()) {
        std::cerr << "Connection error" << std::endl;
    }
    db.insertAccount();

}