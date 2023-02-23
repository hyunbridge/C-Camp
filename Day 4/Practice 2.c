#include <stdio.h>

#define LENGTH 93

void main() {
	// Practice 2
	unsigned long long fib[LENGTH] = {1, 1, };

	for (int i = 2; i < LENGTH; i++)
		fib[i] = fib[i - 1] + fib[i - 2];

	for (int i = 0; i < LENGTH; i++)
		printf("%llu ", fib[i]);
}
