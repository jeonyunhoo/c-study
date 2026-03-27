#include <stdio.h>

int main(void) {

	int a, b, c;

	a = 5 % 3; //5를 3으로 나눈 나머지값을 a에 대입
	a--; //a에서 1 차감
	b = (a++) + 3; //b값에 a + 3 후 a에 1 추가

	printf("%d, %d\n", a, b);

	c = (++a) + 3; //a에 1 추가 후 3을 더하여 c에 대입

	printf("%d,%d,%d", a, b, c);


	return 0;
}