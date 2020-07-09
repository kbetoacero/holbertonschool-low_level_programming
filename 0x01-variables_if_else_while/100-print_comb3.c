#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
* Return: 0
*/

int main(void)
{

	int d1 = 0;
	int d2 = 1;

	while (d1 < 10)
	{
		while (d2 < 10)
		{
			if (d1 < d2)
			{
				putchar(d1 + '0');
				putchar(d2 + '0');
				if (d1 != 8 || d2 != 9)
				{
				putchar(',');
				putchar(' ');
			}
		}
		d2++;
	}
	d1++;
	d2 = 0;
	}
	putchar('\n');
	return (0);
}
