#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add (int i, int j) {

	return i + j;
}

int Input (void) {

	int input;
	scanf ("%d", &input);
	return input;
}

void Result_Print (int val) {

	printf ("덧셈에 대한 결과: %d\n", val);
	printf ("****** END ******");
}

void Intro (void) {

	printf ("****** START ******\n");
	printf ("두 개의 정수 입력\n");
}

int main () {
	
	int a, b, result;

	Intro ();

	a = Input ();
	b = Input ();

	result = Add (a, b);

	Result_Print (result);

	return 0;
}