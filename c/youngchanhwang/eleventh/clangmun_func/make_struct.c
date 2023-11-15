#include "make_struct.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

make_s *init_struct_object(void)
{
    make_s *tmp = (make_s *)malloc(sizeof(make_s));
    tmp->struct_num = 1;

    return tmp;
}

void print_struct_object(make_s *object)
{
    printf("struct_num = %d\n", object->struct_num);
    printf("struct_char = %s\n", object->struct_char);

}

void set_object_char(make_s *object, char *name)
{
    int name_length = strlen(name) + 1;

    object->struct_char = (char *)malloc(sizeof(char) * name_length);
    strncpy(object->struct_char, name ,name_length);
}