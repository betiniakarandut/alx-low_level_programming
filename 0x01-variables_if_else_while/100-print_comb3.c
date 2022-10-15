#include <stdio.h>
/**
 * main - Function to print all possible different
 * combinations of two digits
 * Return: Always 0 (Success).
 */
int main(void)
{
	int y, z;

	for (y = 48; y <= 56; y++)
	{
		for (z = 49; z <= 57)
		{
			if (z > y)
			{
				putchar(y);
				putchar(z);
				if (y != 56 || z != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
