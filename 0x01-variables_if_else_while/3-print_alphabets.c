#include <stdio.h>
/**
 * main - Function that print capital and small
 * letters.
 * Description: The for loop iterate over the
 * letters of alphabet.
 * Return: Always 0 (Success).
 */
int main (void){
	char small;
	char big;
	for(small = 'a'; small <= 'z'; small++)
	{
		putchar(small);
	}
	for (big = 'A'; big <= 'Z'; big++)
	{
		putchar(big);
	}
	putchar('\n');
	return (0);
}
