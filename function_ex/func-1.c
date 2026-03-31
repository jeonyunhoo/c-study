#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add (int a, int b); //함수원형 세미콜론 필수
int Input (void);
void Intro (void);
void Result_Print (int val);


int main () { //시작
	
	int a, b, result;

	Intro (); //함수 호출, ()안에 인수가 없음
	//함수 앞에 형이 없음, 반환되는 값이 없음
	a = Input (); //input() 함수 호출, 인수 없음 
	b = Input (); //input() 함수 호출, 인수 없음

	result = Add (a, b); //Add 함수 호추, 인수 존재(정수형 a, b)

	Result_Print (result); //Result_Print호출, 인수 존재

	return 0;
}

int Add (int i, int j) { //매개 변수(형 선언)
	//a -> i, b -> j
	return i + j;  //더한갑을 반환(int형)
	//int Add(int i, int j)
}

int Input (void) { //사용자 정의 함수, 매개 변수 없음, 정수 입력 출력

	int input;
	scanf ("%d", &input); //정수형 변수 입력받기
	return input; //값 반환(보냄)
	//int input() -> int는 반환되는 값의 형 의미
}

void Result_Print (int val) {

	printf ("덧셈에 대한 결과: %d\n", val); //result -> val(정수 매개변수)
	printf ("****** END ******");
}

void Intro (void) { //함수, ()안에 매개 변수
	//반환되는 값이 없음
	printf ("****** START ******\n"); //제목 출력 부분
	printf ("두 개의 정수 입력\n");
	//반환되는 값이 없음 -> void	
}
