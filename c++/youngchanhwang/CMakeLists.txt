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
        account/repository/AccountRepositoryImpl.cpp
        account/repository/AccountRepository.h
        account/repository/AccountRepositoryImpl.h
        ui/console/get_keyinput/keyinput.cpp
        ui/console/get_keyinput/keyinput.h
        ui/console/window/console_window.cpp
        ui/console/window/console_window.h
        mysql/DbProcess.cpp
        mysql/DbProcess.h
        account/entity/LoginAccount.cpp
        account/entity/LoginAccount.h
        account/controller/request/AccountLoginRequestForm.cpp
        account/controller/request/AccountLoginRequestForm.h
        account/service/request/AccountLoginRequest.cpp
        account/service/request/AccountLoginRequest.h
        account/controller/response/AccountLoginResponseForm.cpp
        account/controller/response/AccountLoginResponseForm.h
        account/service/response/AccountLoginResponse.cpp
        account/service/response/AccountLoginResponse.h
        account/controller/request/AccountRegisterRequestForm.cpp
        account/controller/request/AccountRegisterRequestForm.h
        account/controller/response/AccountRegisterResponseForm.cpp
        account/controller/response/AccountRegisterResponseForm.h
        account/service/request/AccountRegisterRequest.cpp
        account/service/request/AccountRegisterRequest.h
        account/service/response/AccountRegisterResponse.cpp
        account/service/response/AccountRegisterResponse.h
        singleton/Singleton.h
)


target_include_directories(youngchanhwang PRIVATE ${LIBMYSQLCLIENT_INCLUDE_DIRS})
target_link_libraries(youngchanhwang PRIVATE ${LIBMYSQLCLIENT_LIBRARIES})