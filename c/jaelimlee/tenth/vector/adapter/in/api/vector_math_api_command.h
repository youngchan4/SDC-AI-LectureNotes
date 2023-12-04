
#ifndef __VECTOR_MATH_API_COMMAND_H__
#define __VECTOR_MATH_API_COMMAND_H__

enum vector_math_api_command
{
    VECTOR_MATH_API_RANDOM_OPERATION,
    VECTOR_MATH_API_END
};

#define VECTOR_MATH_API_CALL_BUFFER_COUNT       (VECTOR_MATH_API_END)
#define VECTOR_MATH_API_CALL_BUFFER             ((VECTOR_MATH_API_END) - 1)

#endif