#include "holberton.h"

/**
* swap_int - swaps the values of two integers
* @a: integer a
* @b: intger b
* Return: void
*/

void swap_int(int *a, int *b)
{
	int swap = *b;

	*b = *a;
	*a = swap;
}
