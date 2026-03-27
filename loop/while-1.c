#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	//int i = 0; // 1~100
	//int sum = 0; //합계를 누적할 변수

	//while (i <= 100) { //i가 보다 작거나 같을 때만 반복
	//	sum += i;
	//	i += 1; //i = i + 1, i += 1
	//}

	//printf("1 ~ 100까지의 짝수의 합: %d", sum);

	int num, i = 0;

	printf("양의 정수 입력: ");
	scanf("%d", &num);

	while (i < num) { //입력받은 값의 횟수만큼 'handman!'출력

		printf("handaman!\n");
		i++;
	}

	return 0;
}