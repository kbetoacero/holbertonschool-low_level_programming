#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded)
 * Return: On success 1.
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}

	return (0);
}
