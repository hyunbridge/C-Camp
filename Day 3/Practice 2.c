#include <stdio.h>

void main() {
	// Practice 2

	int num;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) printf("*");

	printf("\n");
}
