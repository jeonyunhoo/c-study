#include <stdio.h>

int main() {

	/*int a, b, c; //정수형 변수 3개 선언

	a = 5 % 3; //5를 3으로 나눈 나머지를 a에 대입
	a--; //a에서 1빼기
	b = (a++) + 3; //현 a값에 3더한 후 b에 대입 후 a에 1추가
	printf("%d, %d\n", a, b); 

	c = (++a) + 3; //a값에 1 더한 후 3더하기 이후 c에 대입
	printf("%d, %d, %d", a, b, c);*/

	/*int num1 = 16, num2 = 44; //정수형 변수 2개 선언
	int a = num1++; //a에 num1값 대입 후 num1에 1추가
	int b = --num2; //num2에 2 뺀 후 b에 대입
	printf("%d", a + b);*/

	int val1 = 10, val2 = 12; //정수형 변수 2개 선언
	int result1, result2, result3; //정수형 변수 3개 선언

	result1 = (val1 == 10 && val2 == 12); //둘 다 참일시 1 출력 두 조건 모두 부합 즉 1출력
	result2 = (val1 < 12 || val2 > 12); //두 조건 중 한 개의 조건만 출력 즉 val1 < 12가 옳음으로 1출력
	result3 = (!val1); //'!'거짓 아닐시 라는 뜻

	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2);
	printf("result3 : %d\n", result3);

	return 0;
}