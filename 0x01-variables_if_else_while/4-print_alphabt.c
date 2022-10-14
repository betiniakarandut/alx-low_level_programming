#include <stdio.h>
/**
 * main - Function that prints all letters
 * except q and e
 * Description: If conditional block to
 * validate or reject statement.
 * Return: Always 0 (Success).
 */
int main(void)
{
	char add;

	for (add = 'a'; add <= 'z'; add++)
	{
		if (add != 'e' && add != 'q')
		{
			putchar(add);
		}
	}
	putchar('\n');
	return (0);
}
