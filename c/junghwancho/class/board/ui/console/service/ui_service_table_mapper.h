#ifndef __UI_SERVICE_TABLE_MAPPER_H__
#define __UI_SERVICE_TABLE_MAPPER_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "ui_service_table.h"
#include "handler/list/ui_service_list_handler.h"
#include "handler/create/ui_service_create_handler.h"
#include "handler/read/ui_service_read_handler.h"
#include "handler/modify/ui_service_modify_handler.h"
#include "handler/remove/ui_service_remove_handler.h"
#include "handler/exit/ui_service_exit_handler.h"

#define __UI_SERVICE_TABLE(number, function_prototype) [number] = function_prototype,

__UI_SERVICE_TABLE(UI_SERVICE_GET_LIST, ui_service_list)
__UI_SERVICE_TABLE(UI_SERVICE_CREATE, ui_service_create)
__UI_SERVICE_TABLE(UI_SERVICE_GET_ONE, ui_service_read)
__UI_SERVICE_TABLE(UI_SERVICE_MODIFY, ui_service_modify)
__UI_SERVICE_TABLE(UI_SERVICE_REMOVE, ui_service_remove)
__UI_SERVICE_TABLE(UI_SERVICE_EXIT, ui_service_exit)

#ifdef __cplusplus
}
#endif

#endif