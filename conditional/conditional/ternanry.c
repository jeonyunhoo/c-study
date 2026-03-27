#include <stdio.h>

int main(void) {

	/*int a = 10, b = 20; 
	int max;

	max = a > b ? a : b;

	printf("%d", max);*/

	int num;

	scanf_s("%d", &num);

	num % 2 == 0 ? printf("짝수") : printf("홀수"); //'?'앞은 조건, 앞의 조건에 만족한다면 '?'뒤의 로직 실행, 조건에 맞지 않다면 ':'뒤의 로직 실행

	return 0;
}