#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {

	char fruits[3][20];
	
	for (int i = 0; i <= 2; i++) {

		printf ("과일의 이름을 입력하세요: ");
		scanf ("%s", &fruits[i]);
		//printf ("\n%d. 당신이 선택한 과일: %s\n", i+1, fruits[i]);
	}

	printf ("입력된 과일: %s, %s, %s", fruits[0], fruits[1], fruits[2]);

	return 0;
}