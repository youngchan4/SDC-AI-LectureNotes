#ifndef __MAKE_STURCT_H__
#define __MAKE_STURCT_H__

typedef struct _make_s make_s;

struct  _make_s
{
    int struct_num;
    char *struct_char;
    
};

make_s *init_struct_object(void);
void print_struct_object(make_s *object);
void set_object_char(make_s *object, char *name);



#endif