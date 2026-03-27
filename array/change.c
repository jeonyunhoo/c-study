#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main () {

	int price, money, change;
	int i = 0, j = 0, k = 0;

	printf ("물건의 가격을 입력하세요: ");
	scanf ("%d", &price);

	printf ("투입할 금액을 입력해주세요: ");
	scanf ("%d", &money);

	change = money - price;

	if (money < price) {

		printf ("금액이 부족합니다.");

	} else if (money >= 5000) {

		while (money >= 5000) {
			i++;
			money -= 5000;
		}
	}

	while (money >= 1000) {
		j++;
		money -= 1000;
	}

	while (money >= 100) {
		k++;
		money -= 100;
	}

	printf ("5000원권: %d장\n", i);
	printf ("1000원권: %d장\n", j);
	printf (" 100원권: %d개\n", k);
	printf ("  나머지: %d원\n", money);
	printf ("    잔돈: %d원", change);


	return 0;
}