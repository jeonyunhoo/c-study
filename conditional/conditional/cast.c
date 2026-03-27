#include <stdio.h>

int main() {

	/*int a;

	a = sizeof(int) + sizeof(char); //int는 4Byte할당 char은 1Byte할당

	printf("%d", a);*/

	//int a = 7 + 6;
	//int b = (int)7.3 + (int)6.7; //캐스트 연산자 ()괄호 속 연산자의 값으로 바꾼다. 나머지는 버림처리

	//printf("%d,%d", a, b);

	float a;

	a = 10 / 3;

	printf("%f ", a);

	a = (float)10 / 3; //10을 실수형으로 변환 후 3으로 나눔

	printf("%f", a);

	return 0;
}