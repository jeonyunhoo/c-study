#include <stdio.h>

int main () {

	int a = 10, b = 20; //a 와 b라는 정수형 변수를 선언 후 초기값 지정
	int max; //초기값이 없는 정수형 변수 max 선언

	max = a > b ? 'a' : 'b'; //max 함수에 우항의 값을 담음, a > b보다 큰지 비교 후 식이 옳다면 max값에 '?'뒤의 값인 a를 넣음, 그렇지 않다면 ':'뒤의 갑인 b를 넣음

	return 0;
}