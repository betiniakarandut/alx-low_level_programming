#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Function that prints and compares
 * values of n.
 * Description: The if block checks and
 * evaluate n at each condition.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", ( n ) " is");
	if (n > 5)
	{
		printf("and is greater than 5");
	}
	else if (n == 0)
	{
		printf("and is 0");
	}
	else if (n < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
