#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int num, cnt = 0, i;

	printf("원하는 배수 입력: ");
	scanf("%d", &i);

	printf("배수의 개수 입력: ");
	scanf("%d", &num);

	while (cnt++ < num) { //cut의 값이 입력받은 num의 값보다 작을때만 반복, 첫 시도에서 cnt의 값인 '0'과 입력받은 값 'num'의 미지수와 비교. 사용자가 0 또는 음수를 입력하지 않는 이상 코드가 원활히 진행.
		//while(cnt < num) { cnt++; 이것과 같음
		
		printf("%d ", i * cnt);
		//로직이 진행됨에 따라 비교 후 연산 과정을 통해 1차, 0과 num비교 2차, 1과 num비교.... 점차적으로 cnt에 값을 1씩 추가하며 조건에 부합하지 않을때까지 무한히 반복함
	}

	return 0;
}