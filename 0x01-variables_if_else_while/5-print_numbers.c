#include <stdio.h>

/**
 * main - Function to print numbers in base 10.
 * Description: for loop for iterating
 * over the digit.
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
		printf('\n');
	}
	return (0);
}
