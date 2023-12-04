#include <stdio.h>
#include <math.h>

// 과제
// x, y, z 벡터가 존재
// A_xyz 벡터에 -9 ~ 9 사이의 임의의 크기를 줌
// B_xyz 벡터에 -9 ~ 9 사이의 임의의 크기를 줌
// 통합 벡터는 x, y, z 각각의 벡터의 계산으로 산출
// A가 B를 바라 볼 때 상대 벡터를 출력
// 통합 벡터 길이 = sqrt(x^2 + y^2 + z^2) 


// 스포
// int (*) (int, int) - return
// fp_test
// void (*)(int) - parameter;
int (* fp_test(void(* handler)(int number)))(int, int);

// int tet = fp_test(ptr)(3, 7);

// Quiz. 함수 내부에서 계산한 배열을 리턴 할 수 있는 방법이 있을까요?

// int[3] * return_array (void)
int (* returned_array(void))[3]
{
    static int test_array[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };
    return test_array;
}

int main(void)
{
    int i, j;
    int (* arr)[3];
    int num1 = 1, num2 = 2, num3 = 3;

    // int 타입의 메모리 주소를 저장하는 배열 3개
    int * numbers[3] = { &num1, &num2, &num3 };

    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    // int [3] * array_pointer 형태임
    // int가 3개짜리인 녀석의 메모리 주소를 저장하는 그냥 변수임.
    // 즉 12바이트 짜리 포인터 변수
    int (* array_pointer)[3] = matrix;

    for (i = 0; i < 5; i++)
    {
        printf("array_pointer[%d] = %d\n", i, *array_pointer[i]);
    }

    arr = returned_array();
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

    // pow는 멱급수라는 의미로 3의 2제곱을 의미함
    // 3의 3제곱을 만들거라면 pow(3, 3)
    // sqrt는 제곱근
    printf("sqrt(3^2 + 4^2) = %d\n", (int)sqrt(pow(3, 2) + pow(4, 2)));

    return 0;
}