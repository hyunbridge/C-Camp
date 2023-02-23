#include <stdio.h>

typedef struct {
	int scores[3];
	int total;
} Student;

void main() {
	// Practice 3
	Student students[5];
	int classSum[3] = { 0, };

	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생의 성적 입력(3과목, 공백으로 구분): ", i + 1);
		scanf_s("%d %d %d", &students[i].scores[0], &students[i].scores[1], &students[i].scores[2]);
		students[i].total = students[i].scores[0] + students[i].scores[1] + students[i].scores[2];
		classSum[0] += students[i].scores[0];
		classSum[1] += students[i].scores[1];
		classSum[2] += students[i].scores[2];
	}

	for (int i = 0; i < 5; i++) {
		printf("%d번째 학생의 성적 평균은 %lf점입니다.\n", i + 1, (float)students[i].total / 3);
	}
	for (int i = 0; i < 3; i++) {
		printf("%d번째 과목의 성적 평균은 %lf점입니다.\n", i + 1, (float)classSum[i] / 5);
	}
}
