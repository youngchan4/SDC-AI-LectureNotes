#include <stdio.h>

#include "domain/board/board_model.h"

#define SLAB_CACHE          32
#define SLAB_CACHE2         32
#define SLAB_CACHE3         128

int main (void)
{
    
    board_model *format;
    char title[SLAB_CACHE] = "안녕하세용";
    char author[SLAB_CACHE2] = "홍길동";
    char content[SLAB_CACHE3] = "아 무 내 용 이 나 적 어 봐 요.";
    
    format = init_board_model_object(title, author , content);

    printf(" unique_id : %d\n title : %s\n author : %s\n content : %s\n",format->unique_id, format->title, format->author, format->content );

    return 0;
}
