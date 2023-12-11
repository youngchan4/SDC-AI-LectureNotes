//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_ACCOUNTLOGINRESPONSE_H
#define YOUNGCHANHWANG_ACCOUNTLOGINRESPONSE_H

#include "../../controller/response/AccountLoginResponseForm.h"

class AccountLoginResponse{
private:
    bool isLoginSuccess;

public:
    AccountLoginResponse( bool isLoginSuccess);
    AccountLoginResponseForm *toResponseForm();


};

#endif //YOUNGCHANHWANG_ACCOUNTLOGINRESPONSE_H
