// Practice 1 - Q1

#include <stdio.h>

void main() {
	int numOf20s = 0;

	for (int i = 0; i < 5; i++) {
		int age;
		printf("나이를 입력하세요: ");
		scanf_s("%d", &age);
		if ((20 <= age) && (age < 30)) numOf20s++;
	}

	printf("입력하신 5명 중 20대는 %d명입니다.\n", numOf20s);
}
