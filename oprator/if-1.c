#include <stdio.h>

int main() {

	//int a = 8, b = 10, c; //정수형 변수 선언

	//if (a++ >= b--) { //a와 b를 먼저 비교한 후 연산
	//	c = a - b; //옳지 않은 값 a(8) < b(10)
	//} else {
	//	c = a + b; //옳은 값
	//}

	//printf("a = %d\n", a);//a가 8이었지만 조건문에서 '++'로 1을 더하여 9
	//printf("b = %d\n", b);//b가 10이었지만 조건문에서 '--'로 1을 빼어 9
	//printf("c = %d\n", c);// 9 + 9 = 18

	int num1 = 16, num2 = 80; //정수형 변수 선언
	printf("%d", num1 > num2 ? num1 & num2 : num1 ^ num2); //삼항 연산자, "조건 ? A : B" 조건에 부합하다면 A 출력, 조건에 부합하지 않다면 B 출력
	//위 삼항 연산자의 조건은 맞지 아니함으로 ':'뒤 출력 즉 'num1 ^ num2' == 64

	return 0; //종료
}