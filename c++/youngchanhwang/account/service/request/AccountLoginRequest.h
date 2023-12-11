//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_ACCOUNTLOGINREQUEST_H
#define YOUNGCHANHWANG_ACCOUNTLOGINREQUEST_H

#include <string>
#include <vector>
#include "../../entity/Account.h"


class AccountLoginRequest {
private:
    std::string account_id;
    std::string password;

public:
    AccountLoginRequest(const std::string& account_id, const std::string& password );
    std::string getAccountId();
    std::string getPassword();
};


#endif //YOUNGCHANHWANG_ACCOUNTLOGINREQUEST_H
