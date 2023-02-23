#include <stdio.h>

void main() {
	// Exercise 2
	int num[6];
	int max, min;

	for (int i = 0; i < 6; i++) {
		printf("%d번째 수(정수) 입력: ", i + 1);
		scanf_s("%d", &num[i]);
	}

	max = num[0], min = num[0];
	
	for (int i = 0; i < 6; i++) {
		if (num[i] > max) max = num[i];
		if (num[i] < min) min = num[i];
	}

	printf("Max = %d, Min = %d\n", max, min);
}
