#include<stdio.h>

/**
 * main - Print combinations os single-digits
 *
 * Return: Always 0
 */

int main(void)
{

	int number = 0;

	while (number <= 9)
	{
		putchar(number + '0');

		if (number < 9)
		{
		putchar(',');
		putchar(' ');
		}
	number++;
	}
	putchar('\n');
	return (0);
}
