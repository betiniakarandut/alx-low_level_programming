#include <stdio.h>
/**
 *main - Function that print 
 *lettersof alphabet in lowercase.
 *Description: A for loop to iterate through the letters.
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');
	return (0);
}
