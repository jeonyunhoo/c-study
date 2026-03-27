#include <stdio.h>

int main () {

	int num[5] = { 10, 20, 30, 40, 50 };
	int num1[] = {10, 20, 30 }; //묵시적 초기값의 양 만큼 할당함, 초기값을 주지 않으면 error

	printf ("%d\n", num[2]); //30출력 0부터 세기 시작

	int num2[5] = { 1, 2 }; //배열의 할당을 n으로 주고 n-k칸을 채운다면 나머지 값은 0으로 들어가짐(k < n)
	int num3[5] = { 4 }; // 4 0 0 0 0
	int num4[5] = { 0 }; // 0 0 0 0 0

	int num5[5]; // 100 200 300 400 500 

	num5[0] = 100;
	num5[1] = 200;
	num5[2] = 300;
	num5[3] = 400;
	num5[4] = 500;

	//printf ("%d %d %d %d %d", num5[0], num5[1], num5[2], num[3], num5[4]);

	for (int a = 0; a <= 4; a++) {

		printf ("%d ", num5[a]);

	}

	return 0;
}