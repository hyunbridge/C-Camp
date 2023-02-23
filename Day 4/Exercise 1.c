#include <stdio.h>

void main() {
	// Exercise 1
	int num[8];
	int max = 0;
	int maxIndex;

	for (int i = 0; i < 8; i++) {
		printf("%d번째 수(자연수) 입력: ", i + 1);
		scanf_s("%d", &num[i]);
	}
	
	for (int i = 0; i < 8; i++) {
		if (num[i] > max) {
			max = num[i];
			maxIndex = i;
		}
	}

	printf("가장 큰 수는 %d번째로 입력하신 %d입니다.\n", maxIndex + 1, max);
}
