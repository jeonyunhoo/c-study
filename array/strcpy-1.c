#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // 'include' 전처리기, 입출력 관련 헤더파일
#include <string.h> //문자열 함수 관련 헤더파일

int main () {

	char a[10] = "Hello";

	printf ("%s\n", a);
	printf ("%c\n", a[0]);

	char b[10];
	//b = "Love"; 오류, 사용 불가
	strcpy (b, "Love"); //문자열 복사 (대상, 문자열)
	/*b[0] = 'L';
	b[1] = 'o';
	b[2] = 'v';
	b[3] = 'e';*/

	printf ("%s\n", b);
	//strcpy: 문자열을 선언한 이후 초기화 불가능, 이후 문자열 복사시 사용

	return 0;
}