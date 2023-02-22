#include <stdio.h>

void main() {
	// Practice 3

	for (int i = 1; i <= 9; i++) {
		if ((i == 5) || (i == 7)) continue;
		for (int j = 1; j <= 9; j++) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}
}
