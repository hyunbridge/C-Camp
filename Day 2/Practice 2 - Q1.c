// Practice 2 - Q1

#include <stdio.h>

void main() {
	int numOf10s = 0;
	int numOf20s = 0;
	int numOf30s = 0;

	for (int i = 0; i < 5; i++) {
		int age;
		printf("나이를 입력하세요: ");
		scanf_s("%d", &age);
		if ((10 <= age) && (age < 20)) numOf10s++;
		else if ((20 <= age) && (age < 30)) numOf20s++;
		else if ((30 <= age) && (age < 40)) numOf30s++;
	}

	printf("입력하신 5명 중 10대는 %d명, 20대는 %d명, 30대는 %d명입니다.\n", numOf10s, numOf20s, numOf30s);
}
