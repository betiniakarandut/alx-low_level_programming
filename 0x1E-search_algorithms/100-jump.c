#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: array to search
 * @size: size of the array
 * @value: int value to check
 * Return: index of the value found, or -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, end, move;

	if (!array || size == 0)
		return (-1);
	move = sqrt(size);
	i = 0, end = move;

	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (end < size)
		{
			if (array[i] <= value && value <= array[end])
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, end);
				break;
			}
		} else
		{
			if (array[i] <= value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i, end);
				break;
			}
		}
		i = end;
		end = i + move;
	}

	while (i <= end)
	{
		if (i == size)
			return (-1);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}

/**
int main(void)
{
	 int array[] = {
		 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
	 };
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 6, jump_search(array, size, 6));
	printf("Found %d at index: %d\n\n", 1, jump_search(array, size, 1));
	return (1);
}*/
