// Practice 2 - Q2

#include <stdio.h>

void main() {
	int score;
	char grade;

	printf("점수를 입력하세요(1~100, 정수): ");
	scanf_s("%d", &score);
	
	switch (score / 10) {
	case 10:
	case 9:
		grade = 'A';
		break;
	case 8:
		grade = 'B';
		break;
	case 7:
		grade = 'C';
		break;
	case 6:
		grade = 'D';
		break;
	default:
		grade = 'F';
	}

	printf("당신은 %c입니다.\n", grade);
}
