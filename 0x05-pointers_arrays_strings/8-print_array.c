#include "holberton.h"
#include <stdio.h>
/**
* print_array - prints n elements of an array of integers
* @a : array
* @n : number of elements
* Return : void
*/

void print_array(int *a, int n)
{

	int nu  = 0;

	while (nu < n)
	{
		if (nu < n - 1)
		{
			printf("%d, ", a[nu]);
		}
		else
		{
			printf("%d", a[nu]);
		}
	nu++;
	}
	printf("\n");
}

