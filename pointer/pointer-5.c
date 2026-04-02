#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add (int a, int b); //함수 원형
void sub (int a, int b);
void arr_prn (int c[5]);

int main () {

	int a = 10, b = 20;
	int c[5] = { 1, 2, 3, 4, 5 };

	int res = add (a, b); //정수형 변수에 add함수의 return값을 가져옴
	printf ("%d\n", res);

	sub (a, b); //변수 sub에 a, b값을 함께 보냄, 인수

	arr_prn (c);

	return 0;
}

int add (int a, int b) { //매개변수가 있는 함수

	int sum = a + b;

	return sum; //main함수로 돌려놓음
}

void sub (int a, int b) {

	printf ("%d\n", a - b);
}

void arr_prn (int c[5]) {

	for (int i = 0; i <= 4; i++) {

		printf ("%d ", c[i]);
	}
}