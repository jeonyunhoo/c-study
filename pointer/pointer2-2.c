#include <stdio.h>

//void change (int* p);
//
//int main () {
//
//	int a = 10;
//	int* p = &a;
//
//	change (p);
//
//	printf ("%d\n", *p); //10
//}
//
//void change (int* p) { //포인터여도 주소값 복사(값 전달, call by value)
//
//	int b = 20;
//	p = &b;
//}

void change (int** pp);

int main () {

	int a = 10;
	int* p = &a;

	change (&p);

	printf ("%d\n", *p); //20
}

void change (int** pp) { //포인터여도 주소값 복사(값 전달, call by value)

	int b = 20;
	*pp = &b;
}