#include <stdio.h>

int main () {

	//getchar(): 하나의 문자를 받아서 반환한다
	//putchar() : 하나의 문자를 받아서 출력한다
	//gets() : 하나의 문자열을 읽어서 문자배열에 저장한다
	//puts() : 하나의 문자열을 읽어서 문자배열을 출력한다

	char ch;
	printf ("1자리 문자 입력: ");
	ch = getchar (); //문자 1개 입력받기

	printf ("입력한 문자: ");
	putchar (ch);
	printf ("\n");

	while (getchar () != '\n'); //'\n'(엔터)이 나올 때까지 버퍼에서 문자를 꺼내 버립니다.

	char name[50];
	char address[100];

	printf ("\n이름을 입력하시오: ");
	gets (name); //한 단어 이상 한 줄을 입력받을 때에 사용

	printf ("현제 거주하시는 주소를 입력하시오: ");
	gets (address);

	puts (name); //문자열 한 줄 출력
	puts (address);

	return 0;
}