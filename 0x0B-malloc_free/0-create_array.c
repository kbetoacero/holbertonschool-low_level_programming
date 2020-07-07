#include "holberton.h"
#include <stdlib.h>

/**
* *create_array - creates an array of chars, and initializes it with a char
* @size: size of the array
* @c: array
* Return: NULL if size = 0, a pointer to the array, or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return ('\0');
	}

	array = malloc(size * sizeof(char));

	if (array == '\0')
	{
		return ('\0');
	}
	i = 0;
	while (i < size)
	{
		array[i] *= c;
		i++;
	}
	return (array);
}
