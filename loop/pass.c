#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int pass = 1234;
	int pw = 0;
	
	while (pw != pass) { //pw와 pass가 맞지 않을 경우 아래 로직 실행, 맞지 않으면 무한히 반복함

		printf("비밀번호를 입력하세요: ");
		scanf("%d", &pw); 

	}

	printf("로그인에 성공하셨습니다.");

	return 0;
}