//
// Created by eddi on 23. 12. 6.
//

#ifndef YOUNGCHANHWANG_DBPROCESS_H
#define YOUNGCHANHWANG_DBPROCESS_H


#include <mysql/mysql.h>
#include <string>

class DbProcess {
public:
    DbProcess(const char* host, const char* user, const char* pass, const char* dbName);
    ~DbProcess();

    bool connect();
//    bool insertData();
//    bool updateData(unsigned int boardId, const std::string& newTitle, const std::string& newContent);
//    bool deleteData(unsigned int boardId);
//    void selectData();
//    void readData(unsigned int boardId);


    bool insertAccount(std::string accountId, std::string password);
    bool checkAccount(std::string accountId, std::string password);
    void selectAccountData();
    void readAccountData(unsigned int id);


    MYSQL *getConn();

private:
    MYSQL* conn;
    const char* DB_HOST;
    const char* DB_USER;
    const char* DB_PASS;
    const char* DB_NAME;
};


#endif //YOUNGCHANHWANG_DBPROCESS_H
