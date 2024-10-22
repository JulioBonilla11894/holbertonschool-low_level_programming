#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints if number is positive, zero or negative
 * Return: Always (Success)
 *
 */

int main(int argc, char *argv[]) {
	// Check if the user provided a command-line argument
	if (argc != 2) {
	printf("Usage: %s <number>\n", argv[0]);
	return 1;  // Exit with an error code
	}

	int n;  // Declare n at the beginning
	n = atoi(argv[1]);  // Convert the command-line argument to an integer

	printf("The number is: %d\n", n);  // Print the number

	// Check if the number is positive, zero, or negative
	if (n > 0) {
	printf("%d is positive\n", n);  // Provide n as an argument
	} else if (n == 0) {
	printf("%d is zero\n", n);  // Provide n as an argument
	} else {
	printf("%d is negative\n", n);  // Provide n as an argument
	}

	return 0;  // Ensure that main returns an integer
}
