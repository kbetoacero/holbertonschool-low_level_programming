#include "holberton.h"

/**
* times_table - prints the 9 times table
*
*/

void times_table(void)
{
	int columns;
	int files = 0;
	int d;

	while (files < 10)
	{
		columns = 0;

		while (columns < 10)
		{
			d = columns * files;

			if (d < 10)
			{
				if (columns > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(d + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(d / 10 + '0');
				_putchar(d % 10 + '0');
			}
		columns++;
		}
	_putchar('\n');
	files++;
	}
}
