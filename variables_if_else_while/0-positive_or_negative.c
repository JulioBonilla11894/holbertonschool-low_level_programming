#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

	if (argc != 2) {
	printf("Usage: %s <number>\n", argv[0]);
	return 1;
	}

	int n;
	n = atoi(argv[1]);

	printf("The number is: %d\n", n);


	if (n > 0) {
	printf("%d is positive\n", n);
	} else if (n == 0) {
	printf("%d is zero\n", n);
	} else {
	printf("%d is negative\n", n);
	}

	return 0;
}
