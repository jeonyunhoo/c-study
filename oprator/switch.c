#include <stdio.h>

int main() {

	int n = 5; //정수형 변수 선언

	switch (n) { //n값에 따른 다른 값 출력

	case 1: //n값이 1일때 아래 로직 실행
		printf("1번입력");
		break; //switch문 탈출

	case 2:
		printf("2번입력");
		break;

	case 3:
		printf("3번입력");
		break;

	default: //위 조건에 모두 부합하지 않을 경우 아래 로직 실행
		printf("입력오류");
	}

	return 0; //종료
}