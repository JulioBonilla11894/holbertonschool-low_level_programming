#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */

int main(void) {
	srand(time(0));

	int n;
	n = rand() - RAND_MAX / 2;

	printf("The number is: %d\n", n);

	if (n > 0) {
		printf("int %d is positive\n");
	} else if (n == 0) {
		printf("int %d is zero\n");
	} else {
		printf("int %d is negative\n");
	}

	return (0);
}
