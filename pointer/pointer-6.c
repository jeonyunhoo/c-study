//퐁니터의 증감 연산 (Increment/Decrement)

#include <stdio.h>

int main () {

	int i = 10;
	int* pi = &i; //포인터 변수 *pi에 정수형 변수 i의 주소값을 대입한다.

	printf ("i = %d, pi = %p\n", i, pi);
	//메모리 주소는 2진수로 이루어짐, BUT 출력값은 16진수로 나타내어진다.

	(*pi)++; //pi가 가르키는 위치의 값을 증가한다
	//()먼저 - *pi(변수가 가진 주소의 값) - 값을 증가
	printf ("i = %d, pi = %p\n", i, pi); //%p는 주소 지정자

	*pi++; //pi가 가르키는 위치에서 값을 가져온 후에 포인터 pi를 증가시킨다.
	//*pi - *이 붙으므로 주소의 값을 가져온다(11) - ++은 주소값을 증가시킨다.
	printf ("i = %d, pi = %p\n", i, pi);

	return 0;
}