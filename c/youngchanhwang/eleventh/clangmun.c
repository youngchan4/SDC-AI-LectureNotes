#include <stdio.h>
#include <stdlib.h>

#include "utility/random.h"
#include "clangmun_func/int_para.h"
#include "clangmun_func/int_array.h"
#include "clangmun_func/make_struct.h"

#define ARRAY_MAX       3

void clangmun(void)
{
    int num, num1, i, sum;
    int array[ARRAY_MAX];
    num = 1;
    printf("num = %d\n",1);

    random_seed_config();
    num1 = random_int();
    
    // 3
    if(num1 % 2 ==1 )
    {
        printf("num1  2 == 1\n");
        printf("random num1 = %d\n", num1);
    }

    // 4
    for(i = 3; i <21; i++)
    {
        printf("%3d",i);
    }
    printf("\n");

    // 5
    print_int(num);
    
    // 6
    sum = sum_int(num, num1);
    printf("sum = %d\n", sum);

    // 7
    for(i = 0 ; i < ARRAY_MAX ; i++)
    {
        array[i] = random_int();
        printf("array[%d] = %d\n", i , array[i]);
    }

    // 8
    int *array_d[num1];
    
    for(i = 0 ; i < num1 ; i++)
    {
        array_d[i] = random_int();
        printf("array_d[%d] = %d\n",i ,array_d[i]);
    }

    // 9
    print_array(array_d,num1);

    // 10 
    int array_s;
    array_s = array_sum();
    printf("array_sum = %d\n", array_s); 

    // 11
    make_s *object;
    object = init_struct_object();


    // 12
    char *name = "야야야야";
    set_object_char(object, name);
    print_struct_object(object);



}   