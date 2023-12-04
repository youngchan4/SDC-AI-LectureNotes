#include <stdio.h>
#include <stdlib.h>

#include "utility/random.h"

#include "1/grammar_prob_first.h"
#include "2/grammar_prob_second.h"
#include "extra/i_wanna_return_float_random.h"
#include "3/grammar_prob_third.h"
#include "4/grammar_prob_fourth.h"
#include "5/grammar_prob_fifth.h"
#include "6/grammar_prob_sixth.h"
#include "7/grammar_prob_seventh.h"
#include "8/grammar_prob_eighth.h"
#include "9/grammar_prob_ninth.h"
#include "10/grammar_prob_tenth.h"
#include "11/grammar_prob_eleventh.h"

int main (void)
{
    int i;
    int random_array_alloc_count;
    int *random_array;
    int *array_pointer;
    int *nine_prob_array;

    test_struct *eleven_prob_struct;

    config_random_seed();

    // 1 번 문제.
    make_var_after_print();

    // 2 번 문제.
    print_random_number();
    // 2 번 가변 문제.
    print_random_number_from_main_parameter_transfer(3, 4);

    // extra 문제 (랜덤 소수점).
    print_float_random();

    // 3 번 문제.
    print_number_if_even(
        generate_random(7, 10));

    // 3 번 가변 문제.
    print_random_number_and_alloc_to_global(); // <- 3번을 위한 2번 추가 가변
    print_number_if_even(
        get_allocated_global_random_number());

    // 4 번 문제.
    print_start_to_finish(3, 20);

    // 5 번 문제.
    print_integer_from_parameter(7);

    // 6 번 문제.
    printf("6. result = %d\n", return_from_transfer_two_parameter(3, 7));

    // 7 번 문제.
    array_pointer = return_random_array_data();
    printf("7. 배열 받아 출력하기:\n");
    for (i = 0; i < 3; i++)
    {
        printf("%3d", array_pointer[i]);
    }
    printf("\n");

    // 8 번 문제.
    random_array_alloc_count = random_alloc_integer_array(&random_array);
    printf("8. 동적 할당된 배열 출력하기:\n");
    for (i = 0; i < random_array_alloc_count; i++)
    {
        printf("random_array[%d] = %d\n", i, random_array[i]);
    }
    printf("\n");

    free(random_array);

    // 8 번 실패 케이스.
    random_array_alloc_count = fail_random_alloc_integer_array(random_array);
    printf("8. 실패 케이스 보기:\n");
    for (i = 0; i < random_array_alloc_count; i++)
    {
        printf("random_array[%d] = %d\n", i, random_array[i]);
    }
    printf("\n");

    // 9 번 문제.
    nine_prob_array = alloc_array(&random_array_alloc_count);

    for (i = 0; i < random_array_alloc_count; i++)
    {
        printf("이렇게도 출력 가능 = %d\n", nine_prob_array[i]);
    }

    free(nine_prob_array);

    // 10 번 문제.
    printf("모든 배열의 요소 합: %d\n", add_every_array_element());

    // 11, 12 번 문제.
    eleven_prob_struct = alloc_test_struct();
    printf("num1 = %d\n", eleven_prob_struct->num1);
    printf("num2 = %f\n", eleven_prob_struct->num2);
    printf("num3 = %lf\n", eleven_prob_struct->num3);
    printf("text = %s\n", eleven_prob_struct->text);

    return 0;
}