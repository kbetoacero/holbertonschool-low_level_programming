#include "holberton.h"
#include <stdio.h>

/**
 * main - computes and prints the sum of all the
 * multiples of 3 or 5 below 1024 (excluded)
 * i: integer
 * r: Result
 * Return: On success 1.
 */

int main(void)
{
	int i;
	long a = 1, b = 2, r = 0;

	printf("1, 2");
/*	_putchar(1, 2); */
	for (i = 1; i <= 48; i++)
	{
		r = a + b;
		a = b;
		b = r;
		printf(", %ld", r);
	}
	_putchar('\n');
	return (0);
}
