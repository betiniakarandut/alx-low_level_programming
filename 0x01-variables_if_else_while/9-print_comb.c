#include <stdio.h>
/**
 * main - Function that prints all possible
 * combination of positive numbers.
 * Return: Always (Success)
 */
int main(void)
{
	int num;

	for (num = 48; num >= 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
