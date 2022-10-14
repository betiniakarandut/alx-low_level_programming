#include <stdio.h>
/**
 * main - Function to print letters in reverse order.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
