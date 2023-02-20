// Practice 2

#include <stdio.h>

void main() {
	int birth;
	char blood;
	float height;

	// birth
	printf("생년: ");
	scanf_s("%d", &birth);

	// blood
	printf("혈액형: ");
	scanf_s(" %c", &blood);

	// height
	printf("키: ");
	scanf_s("%f", &height);

	printf("생년 = %d, 혈액형 = %c, 키 = %lf\n", birth, blood, height);
}