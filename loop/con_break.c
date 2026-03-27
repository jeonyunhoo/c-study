#include <stdio.h>

int main() {

	for (int i = 1; i <= 10; i++) {

		if (i % 7 == 0) {
			//break;
			continue; //위 조건을 넘기고 아래 로직을 실행 하지 않고 반복문으로 돌아감
		} else {
			printf("%d ", i);
		}

	}

	return 0;
}