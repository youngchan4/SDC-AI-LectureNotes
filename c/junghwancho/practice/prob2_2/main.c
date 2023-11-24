#include <stdio.h>

#include "2/random_number_generator.h"
#include "3/check_odd.h"
#include "5/int_test.h"
#include "6/int_sum.h"
#include "8/random_size_dynamic_array.h"
#include "9/grammer_prob_ninth.h"

int main (void)
{
//1. 아무 변수나 만들고 변수 값을 출력하세요.
int test_function = 1;
printf("print_test_function: %d\n", test_function);

//2. 랜덤 숫자를 출력하세요.


#define FLOAT_MIN     10000
#define FLOAT_MAX     100000

random_seed_config();
int random_number = random_generate(MIN, MAX);
printf("print_random_number:%d\n", random_number);

float float_random_number = float_random_generate(FLOAT_MIN, FLOAT_MAX);
printf("print_random_number:%.4f\n", float_random_number / 10000);


// 3. 위의 2번에서 만든 랜덤 숫자가 2로 나눠서 나머지가 1인 경우만 출력하세요.

if (check_odd_number(random_number)){
printf("check_odd:%d\n", random_number);    
}
else{
    printf("짝수입니다.\n");
}

/* print_number_if_even(int generated_random_number)
*/

// 4. 숫자 3 ~ 숫자 20 사이의 모든 정수를 출력하세요.
for (int i = 3; i <= 20; i++){
    printf("number %d\n", i);
}

// 5. 정수형 인자 1개를 파라미터로 받아 출력하세요.
int int_test = 1;
printf("int_test_number:%d\n", int_test_number(int_test));

// 6.정수형 인자 2개를 파라미터로 받아 더한 결과를 return 하세요.

printf("int_two_number_sum:%d\n", int_sum_two_numbers(5, 1));

// 7.정수형 배열에 랜덤 숫자 3개를 입력한 이후 배열에 들어 있는 숫자를 출력하세요.

int random_1 = random_generate(MIN, MAX);
int random_2 = random_generate(MIN, MAX);
int random_3 = random_generate(MIN, MAX);
int int_random_aray[3] = {random_1, random_2, random_3};

printf("int_random_array:\n%d\n%d\n%d\n", random_1, random_2, random_3);

// 8. 랜덤을 돌려서 임의 개수의 정수형 동적 배열을 만들고 동적 배열에 숫자를 넣은 이후 출력하세요.

random_size_dynamic_array(get_random_size());

// 9. 정수형 배열에 아무 숫자나 넣고 이 배열을 파라미터로 받아 출력하는 함수를 작성하세요.



    return 0;
}
