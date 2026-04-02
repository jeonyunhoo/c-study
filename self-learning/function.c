#include <stdio.h>

int digit (int n) { //digit 함수에 정수형 변수 n을 선언하며 시작합니다

	if (n < 10) return n; //n의 값을 비교연산 해주며 결국에 이 값이 만족된다면 결결국 누적되어있던 값을 더해주며 연산을 종료합니다.
	return (n % 10) + digit (n / 10); // return(n%10) 받아들인 n의 값을 나눕니다, 이후 digit n/10을 계산해 준뒤 다시 올라가고 이 과정을 n < 10을 만족할때까지 무작정 돌려주다보면 결국에 n < 10을 만족하게 되고 여지것 return에 저장된 값들을 더해주며 결과값을 보내줍니다. 
}
int main () {

	printf ("%d", digit (235)); //digit함수를 불러옴, 인수 '235'를 함께 보냄
}