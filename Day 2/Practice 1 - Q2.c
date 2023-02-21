// Practice 1 - Q2

#include <stdio.h>

void main() {
	int numOfAdults = 0;
	int numOfNotAdults = 0;

	for (int i = 0; i < 5; i++) {
		int age;
		printf("나이를 입력하세요: ");
		scanf_s("%d", &age);
		if (20 <= age)
			numOfAdults++;
		else
			numOfNotAdults++;
	}

	printf("입력하신 5명 중 성인은 %d명이고, 성인이 아닌 사람은 %d명입니다.\n", numOfAdults, numOfNotAdults);
}
