//증감연산자
//a++ a출력 후 1 증가
//++a a에 1 증가 후 출력
//a-- a출력 후 1 감소
//--a a에 1 감소 후 출력

#include <stdio.h>

int main(void) {

	int a = 10;

	printf("%d\n", a++); //후위 증가
	printf("%d\n", ++a); //전위 증가
	printf("%d\n", a--); //후위 감소
	printf("%d\n", --a); //전위 감소

	return 0;
}