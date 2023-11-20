#ifndef __EXCEPTION_H__
#define __EXCEPTION_H__

#ifdef __cplusplus
extern "C" {
#endif

#include <setjmp.h>
#include <stdbool.h>

#define DIVIDE_BY_ZERO          3
#define ARRAY_INDEX_EXCEED      9

extern jmp_buf global_exception_buffer;

int divide_by_zero(int target, int number);
bool array_index_exceed(int index);

#ifdef __cplusplus
}
#endif

#endif
