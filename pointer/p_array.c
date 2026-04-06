#include <stdio.h>

void ap1 ();
void ap2 ();

int main () {

	ap1 ();
	ap2 ();

	return 0;
}

void ap1 () { //배열과 주소

	int i[5] = { 1,2,3,4,5 }; //32비트의 정수형 저장 공간 (0 ~ 4) 5개
	 
	printf ("%d\n\n", i[0]); //i[0] 저장 공간의 값
	printf ("%p\n\n", i); //i배열의 이름은 주소
	printf ("%p\n\n", &i); //i배열주소와 일치
	printf ("%p\n\n", &i[0]); //i배열주소와 일치
	// i == i&[0] //배열 이름은 배열의 0번지 주소
	
	printf ("%p\n\n", &i[1]);
	printf ("%p\n\n", i + 1); //&i[1]과 동일, int 하나 크기(4바이트) 이동
	printf ("%p\n\n", &i[2]);
	printf ("%p\n\n", i + 2); //&i[2]와 동일
}

void ap2 () { //포인터 처럼 배열 사용

	int a[4];

	*a = 111; //a[0] = 111
	*(a + 1) = 222; //a[1] = 222
	*(a + 2) = 333; //a[2] = 333
	*(a + 3) = 444;//a[3] = 444
	
	printf ("%d\n\n", *a); //a[0]값 출력
	printf ("%d\n\n", *(a + 1)); //a[1]
	printf ("%d\n\n", *(a + 2)); //a[2]
	printf ("%d\n\n", *(a + 3)); //a[3]
	//a[2] == *(a + 2)
}