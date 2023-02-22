#include <stdio.h>

void main() {
	// Exercise 2

	int num = 0;

	for (int i = 10; i >= 1; i--)
		num += (i % 2 == 0) ? i : -i;

	printf("%d\n", num);
}
