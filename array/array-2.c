#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define STUDENTS 5

int main () {

	int score[STUDENTS];
	int sum = 0;
	int non = 0;
	char c;

	printf ("시험을 보지 않은 수: ");
	scanf ("%d", &non);

	for (int i = 0; i <= 4 - non; i++) {

		printf ("%d. 성적을 입력해주세요: ", i+1);
		scanf ("%d", &score[i]);

		if (score[i] >= 0 && score[i] <= 100) {
			
			sum += score[i];

		} else {

			printf ("다시 입력하세요.\n");
			i--;
			continue;

		}
	}

	printf ("합계: %d", sum);
	printf ("\n평균: %.1f", sum / (5.0 - non));

	return 0;
}