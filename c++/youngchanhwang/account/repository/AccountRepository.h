//
// Created by eddi on 23. 12. 6.
//

#ifndef YOUNGCHANHWANG_ACCOUNTREPOSITORY_H
#define YOUNGCHANHWANG_ACCOUNTREPOSITORY_H

#include <vector>
#include "../entity/Account.h"

class AccountRepository {
public:
    virtual ~AccountRepository() = default;
    virtual std::vector<Account> createAccount() = 0;
};

#endif //YOUNGCHANHWANG_ACCOUNTREPOSITORY_H
