#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is", n);
	printf(" %d", (n % 10));
	if (n > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (n == 0)
	{
		printf(" and is 0\n");
	}
	else
	{
		printf(" and is less than 6 and not 0\n");
	}
	return (0);
}
