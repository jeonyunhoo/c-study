#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Cont_even (int ar[10]);

int main () {

	int ar[10];

	printf ("정수 10개 입력: ");

	for (int i = 0; i <= 9; i++) {

		scanf ("%d", &ar[i]);
	}
	
	int res = Cont_even (ar);

	print_cont (res);

	return 0;
}

int Cont_even (int ar[10]) {

	int cnt = 0;

	for (int i = 0; i <= 9; i++) {

		if (ar[i] % 2 == 0) {

			cnt++;
		}
	}

	return cnt;
}

int print_cont (int res) {

	printf ("%d", res);
}