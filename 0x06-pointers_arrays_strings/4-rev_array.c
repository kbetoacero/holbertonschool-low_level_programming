#include "holberton.h"

/**
* reverse_array - reverses an array
* @a : an array of integers
* @n : number of elements to swap
* Return: void
*
*/

void reverse_array(int *a, int n)
{
	int swap;
	int last = n - 1;
	int first = 0;

	while (first < last)
	{
	swap = a[first];
	a[first] = a[last];
	a[last] = swap;
	first++;
	last--;
	}
}
