#include <stdio.h>

void main() {
	// Exercise 3

	int iter;
	int sum = 0;
	
	printf("숫자를 입력하세요: ");
	scanf_s("%d", &iter);

	for (int i = 1; i <= iter; i++) {
		int num;
		printf("%d번째 숫자를 입력하세요: ", i);
		scanf_s("%d", &num);
		sum += num;
	}
	
	printf("평균: %lf", (float)sum / iter);
}
