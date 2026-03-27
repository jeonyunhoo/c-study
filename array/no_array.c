#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {

	/*int a, b, c;

	printf ("점수를 입력하세요: ");
	scanf ("%d", &a);

	printf ("점수를 입력하세요: ");
	scanf ("%d", &b);

	printf ("점수를 입력하세요: ");
	scanf ("%d", &c);

	printf ("점수 합계: %d", a + b + c);
	printf ("\n점수 평균: %f", ((float)a + b + c) / 3);*/

	int sum = 0, b;

	for (int a = 1; a <= 10; a++) {

		printf ("%2d. 점수를 입력하세요: ", a);
		scanf ("%d", &b);

		sum += b;

		b = 0;

	}

	printf ("합계: %3d\n", sum);
	printf ("평균: %3.1f", (double)sum / 10);

	return 0;
}