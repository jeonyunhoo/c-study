#include <stdio.h>

int main () {

	int i = 4000;
	int* p = NULL; //포인터 변숫 선언

	p = &i; //i변수의 주소를 p포인터 변수에 줌

	printf ("p = %p\n", p);
	//%p : 주소를 출력하는 서식 문자
	printf ("&i = %p\n\n", &i);

	printf ("i = %d\n", i);
	*p += 1000;
	printf ("*p = %d\n\n", *p);
	//주소에 저장된 내용에 접근하는 포인터

	int x = 10, y = 20;
	int* pi; //포인터 변수

	pi = &x; //x의 메모리 좌표를 pi에 삽입한다
	printf ("pi = %p\n", pi); //pi에 저장된 좌표값을 출력한다
	printf ("*pi = %d\n", *pi); //pi에 저장된 값을 출력한다

	pi = &y;
	printf ("pi = %p\n", pi);
	printf ("*pi = %d\n", *pi);

	return 0;
}