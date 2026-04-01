#include <stdio.h>

int main () {

	int a[5] = { 9, 1, 7, 3, 5 };
	int i, j, min, t;

	for (i = 0; i < 4; i++) { //i에 대한 for문 i가 4미만일때만 돌린다. 1회전당 i를 1씩 추가한다

		min = i; //min의 그릇에 i의 값을 넣는다.

		for (j = i + 1; j < 5; j++) { 

			if (a[j] < a[min]) { //a[j]의 값이 a[min](즉 a[i])의 값보다 작다면 min 자리에 j를 넣는다

				min = j;
			}
		}

			t = a[i]; //t의 자리에 a[i]의 값을 넣고 
			a[i] = a[min]; //a[i]의 자리에 a[min]값을 넣고
			a[min] = t; //a[min]자리에 t의 값을 넣는다 즉 a[i]의 값의 자리와 a[min]의 값의 자리를 서로 바꿔준다
		}
	for (i = 0; i < 5; i++) {

		printf ("%2d", a[i]); //배열 a의 값을 앞에서부터 나열한다. (1 3 5 7 9)
	}
}
