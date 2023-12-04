#ifndef __BOARD_API_H__
#define __BOARD_API_H__

#ifdef __cplusplus
extern "C" {
#endif

enum board_api
{
    BOARD_API_LIST,
    BOARD_API_REGISTER,
    BOARD_API_READ,
    BOARD_API_MODIFY,
    BOARD_API_REMOVE,
    BOARD_API_END
};

#define BOARD_API_BUFFER_COUNT          (BOARD_API_END)
#define BOARD_API_BUFFER                ((BOARD_API_END) - 1)

#ifdef __cplusplus
}
#endif

#endif