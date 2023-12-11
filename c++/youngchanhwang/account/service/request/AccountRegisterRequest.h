//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_ACCOUNTREGISTERREQUEST_H
#define YOUNGCHANHWANG_ACCOUNTREGISTERREQUEST_H

#include "../../entity/Account.h"

class AccountRegisterRequest{
private:
    std::string account_id;
    std::string password;

public:
    AccountRegisterRequest(const std::string& account_id, const std::string& password);
    Account *toAccount();

};

#endif //YOUNGCHANHWANG_ACCOUNTREGISTERREQUEST_H
