#include "holberton.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements of the array.
 * @size: size in bytes of each element of the array.
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *tmp_ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	tmp_ptr = (char *)ptr;

	for (i = 0; i < (nmemb * size); i++)
		tmp_ptr[i] = 0;

	return (ptr);
}
