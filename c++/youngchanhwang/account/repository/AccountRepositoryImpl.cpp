//
// Created by eddi on 23. 12. 6.
//

#include "AccountRepositoryImpl.h"
#include "../../mysql/DbProcess.h"
#include <string>


void AccountRepositoryImpl::createAccount()
{
    std::string id = "어카운트아이디";
    std::string pass = "어카운트패스워드";


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
    db.insertAccount(id, pass);

}

void AccountRepositoryImpl::checkAccount()
{
    LoginAccount data = accountRequestLogin->getIdPw();

    std::cout << "AccountRepositoryImpl 아이디 비밀번호 체크" << std::endl;

    // mysql 접속
    const char* DB_HOST = "localhost";
    const char* DB_USER = "eddi";
    const char* DB_PASS = "eddi@123";
    const char* DB_NAME = "test_db";

    DbProcess db(DB_HOST, DB_USER, DB_PASS, DB_NAME);


    if (!db.connect()) {
        std::cerr << "Connection error" << std::endl;
    }
    // 로그인 실패하면 0 성공하면 1
    db.checkAccount(data.account_id, data.password);





}