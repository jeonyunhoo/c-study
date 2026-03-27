#include <stdio.h>
void f3 (); //함수 원형
void arrPrint (int k[2][3]);

//void f1 () { //main 함수에서 호출해야만 실행
//
//	int a[2][3] = {
//
//		{4, 5, 6},
//		{7, 8, 9}
//	};
//
//	/*a[0][0] = 4;
//	a[0][1] = 5;
//	a[0][2] = 6;
//	a[1][0] = 7;
//	a[1][1] = 8;
//	a[1][2] = 9;*/
//
//	printf ("%d\n", a[0][0]);
//	printf ("%d\n", a[0][1]);
//	printf ("%d\n", a[0][2]);
//	printf ("%d\n", a[1][0]);
//	printf ("%d\n", a[1][1]);
//	printf ("%d\n", a[1][2]);
//	printf ("-------------------------------------------\n");
//}

//void f2() {
//
//	int b[2][3];
//	int totoalsize = sizeof (b); //배열 b의 전체 사이즈
//
//	printf ("%d\n", totoalsize); //24
//
//	int bsize = sizeof (b[0]); //배열 b의 0번째 행의 사이즈
//
//	printf ("%d\n", bsize); //12
//	printf ("%d\n", sizeof(b[0][0])); //b의 0행 0열 값의 사이즈 //12
//	printf ("%d\n", sizeof(b) / sizeof(b[0])); //전체 크기 / 한 행 크기 // 24 / 12 = 2
//	printf ("%d\n", sizeof(b[0]) /sizeof(b[0][0])); //한 행 크기 / 한 값 크기 // 12 / 4 = 3
//	printf ("--------------------------------------------\n");
//}

int main () {

	//f1 ();
	//f2 ();
	f3 ();

	return 0;
}

void f3 () {

	int a[2][3] = { //1 2 3 4 5 6

		{1,2,3}, 
		{4,5,6} 
	};
	arrPrint (a); //인수 보내며 함수 호출

	int b[2][3] = { //1 0 0 4 0 0

		{1},
		{4}
	};
	arrPrint (b);

	int c[2][3] = { // 1 2 0 0 0 0

		{{1,2}}
	};
	arrPrint (c);

	int d[2][3] = {

		{1, 2, 3, 4, 5, 6} 
	};
	arrPrint (d);

	int i[2][3] = {

		{1, 2, 3, 4} //1 2 3 4 0 0
	};
	arrPrint (i);

	int j[2][3] = { // 1 2 0 0 0 0

		{1, 2}
	};
	arrPrint (j);

	int k[2][3] = { // 0 0 0 0 0 0

		{0}
	};
	arrPrint (k);


}

void arrPrint (int k[2][3]) { //k를 매게변수 -> 인수와 유형, 개수 통일

	for (int i = 0; i <= 1; i++) {

		for (int j = 0; j <= 2; j++) {

			printf ("%d", k[i][j]);
		}

		printf ("\n");
	}
}