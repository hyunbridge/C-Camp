// Practice 2 - Q2

#include <stdio.h>

void main() {
	char score;

	printf("점수를 입력하세요: ");
	scanf_s("%c", &score);

	switch (score) {
	case 'A':
		printf("91 ~ 100");
		break;
	case 'B':
		printf("81 ~ 90");
		break;
	case 'C':
		printf("71 ~ 80");
		break;
	case 'D':
		printf("61 ~ 70");
		break;
	case 'F':
		printf("60 이하");
	}
}
