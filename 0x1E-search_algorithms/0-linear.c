#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - searches for a value in an array
 * @array: pointer to first element of array to search in
 * @size: size of array
 * @value: int to check
 * Return: -1(for a NULL value)
 * */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

        if(array == NULL)
                return (-1);

        while(i < size)
        {
                printf("Value checked index array[%lu] = [%d]\n", i, array[i]);
                if(array[i] == value)
                        return(i);
		i++;
        }
        return (-1);
}

/**
 * int main(void)
{
        int array[] = {
                10, 1, 42, 3, 4, 42, 6, 7, -1, 9
        };

        size_t size = sizeof(array) / sizeof(array[0]);
        printf("Found %d at index: %d\n\n", 3, linear_search(array, size, 3));
        return(1);
}*/
