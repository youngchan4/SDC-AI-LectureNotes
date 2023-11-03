// stdio => Standard IO 의 약자
// printf() 를 사용하려면 #include <stdio.h> 가 필요합니다.
#include <stdio.h>
#include "second.h"

// void의 영어 의미는 '공허한', '텅빈' 
// 함수를 작성하는 요령
// 
// 1. 먼저 return(리턴) 타입을 작성합니다.
//    [ 리턴 타입이란 결론적으로 출력을 의미합니다. ]
// 2. 함수의 이름을 작성합니다 ( 자유롭게 작성 ) <- 어떤 작업인지 의미 전달이 쉽게 이름을 작성합니다.
//    [ 약자로 이름을 지으면 혼선이 발생 할 수 있으므로 풀 네이밍으로 작성합시다! ]
// 3. 소괄호를 열고 닫은 이후 파라미터(인자 혹은 입력) 타입을 작성합니다.

void second_function(void)
{
	// int number
	// int 라는 것은 데이터 타입
	// number 는 변수의 이름
	// Q. 그렇다면 변수란 무엇일까요 ?
	// => 특정한 데이터타입의 메모리 공간에 정보를 저장
	//	  데이터 타입 => int, float, double, short, byte, long, long long int, long long double
	//	  int (4byte), float (4byte), double (8byte), short (2byte), char (1byte)

	// byte 란 무엇인가?
	// bit 라는 개념이 존재하며 이 bit 가 8개 모이면 1byte 가 됩니다.
	// bit 란 무엇인가?
	// bit 는 0 혹은 1을 표현할 수 있는 단위
	// 1bit 면 표현 가능한 숫자가 2개 (2^1)
	// 2bit 면 표현 가능한 숫자가 4개 (2^2)
	// 3bit 면 표현 가능한 숫자가 8개 (2^3)
	// 8bit(1byte) => 2^8 => 256 (0~ 255 양수) , (-128 ~ 127 음수 고려하면)

	// int, short, char, long long int 는 모두 정수 (-300, 0, 90 1234 등등)
	// float, double, long long double 은 모두 소수점 (-0.3, 0.123, 0.465 등등)
	// char 는 문자 또한 표현 할 수 있습니다.

	// 변수를 만드는 방법
	// 1. 데이터타입을 작성합니다.
	// 2. 변수 이름을 지정합니다 ( 목적 및 의미 전달이 잘 되어야 합니다 )
	// 3. 필요하다면 변수를 초기화 합니다 ( 초기화는 '= 숫자' 형태로 가능합니다 )

	// 주의 사항 '=' 은 대입연산으로 생각해주세요. ( 같다가 아니다 )
	int number = 3;
	// %d 는 decimal 의 약자로 number 라는 값을 숫자 형태로 표현해줍니다.
	printf("숫자 = %d\n", number);
}