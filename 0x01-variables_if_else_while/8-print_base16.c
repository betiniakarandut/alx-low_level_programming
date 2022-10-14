#include <stdio.h>
/**
 * main - Function to print all numbers in base 16
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nu;
	char lt;

	for (nu = 48; nu <= 58; nu++)
		putchar(nu);
	for (lt = 'a'; lt <= 'f'; lt++)
		putchar(lt);
	putchar('\n');
	return (0);
}
