#include <stdio.h>

void main() {
	// Problem 2
	int input[3];
	int dices[6] = { 0, };

	scanf_s("%d %d %d", &input[0], &input[1], &input[2]);
	for (int i = 0; i < 3; i++) 
		dices[input[i] - 1] += 1;

	int maxSame = 0, maxSameEyeNumber = 0, score = 0;

	for (int i = 0; i < 6; i++) {
		if (dices[i] >= maxSame) {
			maxSame = dices[i];
			const int eyeNumber = i + 1;
			if (eyeNumber >= maxSameEyeNumber)
				maxSameEyeNumber = eyeNumber;
		}
	}
	
	switch (maxSame) {
	case 3:
		score = 10000 + (maxSameEyeNumber) * 1000;
		break;
	case 2:
		score = 1000 + (maxSameEyeNumber) * 100;
		break;
	case 1:
		score = (maxSameEyeNumber) * 100;
		break;
	}

	printf("%d", score);
}

