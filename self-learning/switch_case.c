#include <stdio.h>

int main () {

	int a = 4;

	switch (a) { //변수 a값에 대한 식

		case 5: printf ("A"); //a의 값이 5라면 뒤 로직 실행

		case 3: printf ("B");

		case 1: printf ("C");

		default: printf ("D"); //위 모든 case조건에 맞지 않은 값 처리
	}

	return 0;
}