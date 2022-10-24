#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int arr[100];
	int id, sum, nap;

	sum = 0;	

	srand(time(NULL));

	for (id = 0; id < 100; id++)
	{
		arr[id] = rand() % 78;
		sum += (arr[id] + '0');
		putchar(arr[id] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			nap = 2772 - sum - '0';
			sum += nap;
			putchar(nap + '0');
			break;
		}
	}

	return (0);
}

