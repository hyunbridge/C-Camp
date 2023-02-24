#include <stdio.h>

void main() {
	// Problem 3
	int num;

	scanf_s("%d", &num);

	while (num > 0) {
		for (int i = 0; i < num; i++)
			printf("*");
		num--;
		printf("\n");
	}
}

