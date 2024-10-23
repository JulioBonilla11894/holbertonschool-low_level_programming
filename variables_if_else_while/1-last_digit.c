#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main -Prints a text according number
 * Return: Always (Success)
 *
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	}
	else if (lastf == 0)
	{
	printf("Last digit of %d is %d and is 0\" n, lastd);
	}
	return (0);
}
