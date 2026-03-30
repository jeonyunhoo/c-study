#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int a;
	char menu[5][10] = { //5행 10열 사이즈의 배열 선언 (0행 ~ 4행, 0열 ~ 9열)

		"init", //한 행씩 초기값 설정
		"open",
		"close",
		"read",
		"write"
	};

	for (a = 0; a < 5; a++) {

		printf ("%d 번째 메뉴: %s \n", a, menu[a]);
	}

	return 0;
}