#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	srand((unsigned)time(NULL)); //시간에 따른 양수인 난수값 추출
	int answer = rand() % 100; //정수형 변수 answer에 0 ~ 99사이 난수값을 대입
	//printf("%d\n", answer);

	int guess;
	int try = 0;

	do { //일단 아래 로직 실행

		printf("정답을 추측하여 보시오: ");
		scanf("%d", &guess);
		try++;
		if (guess > answer) {
			printf("입력한 숫자가 정답보다 위\n");
		}
		else if (guess < answer) {
			printf("입력한 숫자가 정답보다 아래\n");
		}

	} while (guess != answer); //이후 조건을 확인하고 조건에 부합하다면 위 로직 재실행

	printf("축하합니다. 시도횟수 = %d", try);

	return 0;
}