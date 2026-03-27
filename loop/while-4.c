#include <stdio.h>

int main() {

	/*int x = 1;
	int y = 1;

	while (x <= 3) {

		while (y <= 3) {
			printf("%d %d\n", x, y);
			y++;
		}

		x++;
		y = 1;

	}*/

	int x, y;

	for (x = 1; x <= 3; x++) {

		for (y = 1; y <= 3; y++) {
			printf("%d %d\n", x, y);
		}
		y = 0;
	}

	return 0;
}