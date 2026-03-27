#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int i = 0;

	do {

		printf("1. 새로 만들기\n");
		printf("2. 파일 닫기\n");
		printf("3. 파일 닫기\n");
		printf("하나를 입력하세요: ");
		scanf("%d", &i);

		
	} while (i > 3 || i < 1);

	printf("선택한 메뉴는 %d", i);

	return 0;
}