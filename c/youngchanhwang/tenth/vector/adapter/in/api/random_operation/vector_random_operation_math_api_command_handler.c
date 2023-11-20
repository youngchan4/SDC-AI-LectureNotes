#include "vector_random_operation_math_api_command_handler.h"

#include "../../../../domain/model/vector_model.h"
#include "../../../../../utility/random.h"

#include "../../../../application/services/vector_service_command.h"
#include "../../../../application/services/add/vector_add_service_command_handler.h"
#include "../../../../application/services/sub/vector_sub_service_command_handler.h"
#include "../../../../application/services/vector_service_command_table.h"


#include <stdio.h>

void vector_random_operation(void)
{
    printf("벡터 랜덤 연산을 수행합니다!\n");

    vector_service_command_table[0]();
}