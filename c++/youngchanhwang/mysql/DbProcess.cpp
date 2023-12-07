//
// Created by eddi on 23. 12. 6.
//

#include <mysql/mysql.h>
#include "DbProcess.h"
#include <iostream>

DbProcess::DbProcess(const char* host, const char* user, const char* pass, const char* dbName)
        : conn(nullptr), DB_HOST(host), DB_USER(user), DB_PASS(pass), DB_NAME(dbName) {}

DbProcess::~DbProcess() {
    if (conn != nullptr) {
        mysql_close(conn);
    }
}

bool DbProcess::connect() {
    conn = mysql_init(nullptr);
    return (mysql_real_connect(conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, nullptr, 0) != nullptr);
}
bool DbProcess::insertAccount(std::string accountId, std::string password) {
    std::string insertQuery = "INSERT INTO account (account_id, password, reg_date, upd_date) VALUES \
                               ('" + accountId + "', '" + password + "', now(6), now(6))";

    return (mysql_query(conn, insertQuery.c_str()) == 0);
}

bool DbProcess::checkAccount(std::string accountId, std::string password) {
    std::string checkQuery = "SELECT * FROM account where account_id = '" + accountId + "' and password = '" + password + "'";


    if (mysql_query(conn, checkQuery.c_str()) == 0) {
        MYSQL_RES* result = mysql_store_result(conn);
        if ((mysql_fetch_row(result)) == nullptr) {
            std::cout << "아이디 비밀번호 틀림" << std::endl;
            return false;

        }

        if (result != nullptr) {
            std::cout << "아이디 비밀번호 확인" << std::endl;
            return true;
        }

        mysql_free_result(result);
    } else {
        std::cout << "mysql_query() failed" << std::endl;
    }
}

void DbProcess::selectAccountData() {
    std::string selectQuery = "SELECT * FROM account";

    if (mysql_query(conn, selectQuery.c_str()) == 0) {
        MYSQL_RES* result = mysql_store_result(conn);
        if (result == nullptr) {
            std::cerr << "mysql_store_result() failed" << std::endl;
            return;
        }

        MYSQL_ROW row;
        while ((row = mysql_fetch_row(result)) != nullptr) {
            std::cout << "id: " << row[0] << ", account_id: " << row[1] << ", password: " << row[2]
                      << ", reg_date: " << (row[3] ? row[3] : "NULL")
                      << ", upd_date: " << (row[4] ? row[4] : "NULL")  << std::endl;
        }

        mysql_free_result(result);
    } else {
        std::cerr << "mysql_query() failed" << std::endl;
    }
}

void DbProcess::readAccountData(unsigned int id) {
    std::string readQuery = "SELECT * FROM account WHERE id = " + std::to_string(id);
    if (mysql_query(conn, readQuery.c_str()) == 0) {
        MYSQL_RES* result = mysql_store_result(conn);
        if (result == nullptr) {
            std::cerr << "mysql_store_result() failed" << std::endl;
            return;
        }

        MYSQL_ROW row = mysql_fetch_row(result);
        if (row != nullptr) {
            std::cout << "id: " << row[0] << ", account_id: " << row[1] << ", password: " << row[2]
                      << ", reg_date: " << (row[3] ? row[3] : "NULL")
                      << ", upd_date: " << (row[4] ? row[4] : "NULL")  << std::endl;
        } else {
            std::cout << "Record not found for id: " << id << std::endl;
        }

        mysql_free_result(result);
    } else {
        std::cerr << "mysql_query() failed" << std::endl;
    }
}

MYSQL *DbProcess::getConn()
{
    return conn;
}