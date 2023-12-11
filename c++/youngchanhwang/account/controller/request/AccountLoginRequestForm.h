//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_ACCOUNTLOGINREQUESTFORM_H
#define YOUNGCHANHWANG_ACCOUNTLOGINREQUESTFORM_H

#include <string>
#include "../../service/request/AccountLoginRequest.h"


class AccountLoginRequestForm {
private:
    std::string account_id;
    std::string password;

public:
    AccountLoginRequestForm(const std::string& account_id, const std::string& password);
    AccountLoginRequest *toAccountLoginRequest();


};
#endif //YOUNGCHANHWANG_ACCOUNTLOGINREQUESTFORM_H
