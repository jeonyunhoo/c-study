#include <stdio.h>
int fun1 ();
int fun2 ();

int main () {

	printf ("메인 시작\n"); //1
	fun1 (); //2
	printf ("메인 끝\n"); //8

	return 0;
}

int fun1 () {
	
	printf ("fun1함수 시작\n"); //3
	fun2 (); //4
	printf ("fun1함수 끝\n"); //7

	return 0;
}

int fun2 () {

	printf ("fun2함수 시작\n"); //5
	printf ("fun2함수 끝\n"); //6

	return 0;
}