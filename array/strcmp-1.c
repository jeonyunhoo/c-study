#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main () {

	char a[30], b[30];
	int res;

	printf ("첫 번째 문자 입력: ");
	scanf ("%s", a); //배열명은 배열의 첫 주소를 내포하고있다.

	printf ("두 번째 문자 입력: ");
	scanf ("%s", b);

	res = strcmp (a, b);

	if (res < 0) { //음수이면 문자열1이 문자열2보다 사전순으로 앞에 있음
		printf ("%s가 %s보다 앞에 있습니다.", a, b);
	} else if (res == 0) { //두 문자열이 같음
		printf ("%s와 %s가 같습니다.", a, b);
	} else { //위 조건을 제외한 양수를 의미함, 문자열1이 문자열2 보다 사전적으로 뒤에 위치함
		printf ("%s가 %s보다 뒤에 있습니다.", a, b);
	}

	return 0;
}