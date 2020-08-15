#include<stdio.h>
#include "holberton.h"

/**
* print_times_table - prints the n times table, starting with 0
* @n: times table to print
* Return: 0
*/
void print_times_table(int n)
{
	int t = 0, i, j;

	if ((n <= 15) && (n >= 0))
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				t = i * j;
				if (j != 0)
				{
					(t / 100 == 0) ?
						_putchar(' ') :
						_putchar(t / 100 + '0');
					(t / 10 == 0) ?
						_putchar(' ') :
						_putchar((t / 10) % 10 + '0');
					_putchar(t % 10 + '0');
				}
				else
					_putchar('0');
				if  (j != n)
					_putchar(','), _putchar(' ');
			}
			_putchar('\n');
		}
}
