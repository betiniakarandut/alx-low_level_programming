#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: Index where value is located, or -1 if not present or array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    int middle, result;

    if (array == NULL || size == 0)
        return (-1);

    printf("Searching in array: ");
    for (size_t i = 0; i < size; i++)
    {
        printf("%d", array[i]);
        if (i < size - 1)
            printf(", ");
    }
    printf("\n");

    if (size == 1 && array[0] != value)
        return (-1);

    middle = (size - 1) / 2;
    if (array[middle] == value)
    {
        if (array[middle - 1] == value)
            return (advanced_binary(array, middle + 1, value));
        else
            return (middle);
    }
    else if (array[middle] < value)
    {
        result = advanced_binary(array + middle + 1, size - middle - 1, value);
        if (result == -1)
            return (-1);
        else
            return (result + middle + 1);
    }
    else
    {
        return (advanced_binary(array, middle + 1, value));
    }
}

