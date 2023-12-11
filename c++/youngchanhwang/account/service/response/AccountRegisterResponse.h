//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_ACCOUNTREGISTERRESPONSE_H
#define YOUNGCHANHWANG_ACCOUNTREGISTERRESPONSE_H

#include "../../controller/response/AccountRegisterResponseForm.h"


class AccountRegisterResponse{
private:
    bool isRegisterSuccess;

public:
    AccountRegisterResponse( bool isRegisterSuccess);
    AccountRegisterResponseForm *toResponseForm();


};

#endif //YOUNGCHANHWANG_ACCOUNTREGISTERRESPONSE_H
