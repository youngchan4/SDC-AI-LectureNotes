
//
// Created by eddi on 23. 12. 6.
//

#ifndef YOUNGCHANHWANG_ACCOUNTREPOSITORYIMPL_H
#define YOUNGCHANHWANG_ACCOUNTREPOSITORYIMPL_H

#include "AccountRepository.h"

class AccountRepositoryImpl : public AccountRepository {

public:
    std::vector<Account> createAccount() override;
};

#endif //YOUNGCHANHWANG_ACCOUNTREPOSITORYIMPL_H
