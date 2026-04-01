#include <stdio.h>

int main () {

	int su[3][2] = { 33, 22, 44, 66, 77, 100 }; //su배열 선언 및 초기값 지정
	int sum = 0;

	for (int i = 0; i < 3; i++) { //내부 for이 3회 회전할 동안 1회 회전

		for (int j = 0; j < 2;j++) {
			sum += su[i][j];
		}
	}

	printf ("합: %d", sum);

	return 0;
}