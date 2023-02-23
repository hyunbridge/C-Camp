#include <stdio.h>

void main() {
	// Practice 3
	int num[8][9];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++)
			num[i][j] = (i + 2) * (j + 1);
	}

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 9; j++)
			printf("%d * %d = %d, ", i + 2, j + 1, num[i][j]);
		printf("\n");
	}
}
