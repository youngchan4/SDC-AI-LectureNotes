//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_ACCOUNTLOGINRESPONSEFORM_H
#define YOUNGCHANHWANG_ACCOUNTLOGINRESPONSEFORM_H

class AccountLoginResponseForm {
private:
    bool LoginSuccess;

public:
    AccountLoginResponseForm (bool LoginSuccess);
    bool getLoginSuccess();

};

#endif //YOUNGCHANHWANG_ACCOUNTLOGINRESPONSEFORM_H
