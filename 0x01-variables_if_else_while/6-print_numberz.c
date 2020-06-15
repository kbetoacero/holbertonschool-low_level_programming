#include<stdio.h>

/**
 * main - Print digits base 10
 *
 * Return: Always 0
 */

int main(void)
{

	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
