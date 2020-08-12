#include "function_pointers.h"

/**
* int_index - searches for an integer in an array.
* @array: given array.
* @size: size of the array.
* @cmp: the pointer to the function that compares.
 * Return: -The index where the integer was found.
 * if no match return 0.
 * if size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
