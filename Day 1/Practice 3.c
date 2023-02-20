// Practice 3

#include <stdio.h>

void main() {
	int a, b;

	printf("정수 1: ");
	scanf_s("%d", &a);

	printf("정수 2: ");
	scanf_s("%d", &b);

	const sum = a + b;
	const sub = a - b;
	const mul = a * b;
	const float div = (float)a / b; 
	const remainder = a % b;

	printf("합: %d, 차: %d, 곱: %d, 나누기: %lf (몫 %d, 나머지 %d)\n", sum, sub, mul, div, (int)div, remainder);
}