#include "main.h"
#include <stdio.h>

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'z'; i++)
	{
		if (c == i || i == c)
		{
			printf("%d", c);
		}
	}
	return (0);
}
