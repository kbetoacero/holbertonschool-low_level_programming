#include<stdio.h>

/**
 * main - Print the single digits base 10 from 0
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int digit = 0;

	while (digit < 10)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
