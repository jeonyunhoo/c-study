#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num = 0;
	int i = 1;

	printf("출력하고 싶은 단은?(2 ~ 9): ");
	scanf("%d", &num);

	while (i <= 9) { //i가 9보다 낮을 때만 아래 로직 반복

		printf("%d x %d = %d\n", num, i, num * i);
		i++;

	}

	return 0;
}