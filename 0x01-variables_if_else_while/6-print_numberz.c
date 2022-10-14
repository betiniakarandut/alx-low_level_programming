#include <stdio.h>
/**
 * main - Function that prints all sngle
 * digit numbers of base ten.
 * Description: None
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
