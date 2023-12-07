cmake_minimum_required(VERSION 3.26)
project(youngchanhwang)

set(CMAKE_CXX_STANDARD 17)


include(FindPkgConfig)
pkg_check_modules(LIBMYSQLCLIENT REQUIRED mysqlclient)

link_directories(${LIBMYSQLCLIENT_LIBRARY_DIRS})


add_executable(youngchanhwang main.cpp
        account/entity/Account.cpp
        account/entity/Account.h
        account/controller/AccountController.cpp
        account/controller/AccountController.h
        account/service/AccountServiceImpl.cpp
        account/service/AccountService.h
        account/service/AccountServiceImpl.h
        account/service/response/AccountResponse.cpp
        account/service/response/AccountResponse.h
        account/repository/AccountRepositoryImpl.cpp
        account/repository/AccountRepository.h
        account/repository/AccountRepositoryImpl.h
        ui/console/get_keyinput/keyinput.cpp
        ui/console/get_keyinput/keyinput.h
        ui/console/window/console_window.cpp
        ui/console/window/console_window.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        account/service/request/AccountRequestLogin.cpp
        account/service/request/AccountRequestLogin.h
        account/entity/LoginAccount.cpp
        account/entity/LoginAccount.h
)


target_include_directories(youngchanhwang PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(youngchanhwang PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})