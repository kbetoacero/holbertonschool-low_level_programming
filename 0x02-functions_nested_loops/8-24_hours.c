#include "holberton.h"

/**
* jack_bauer - prints every minute of day
*
* void : minutes
* Return: void
*/
void jack_bauer(void)
{
	int _m = 0;
	int mm = 0;
	int _h = 0;
	int hh = 0;

	while (hh < 3)
	{
		while (_h < 4)
		{
			while (mm < 6)
			{
				while (_m < 10)
				{
					_putchar(hh + '0');
					_putchar(_h + '0');
					_putchar(':');
					_putchar(mm + '0');
					_putchar(_m + '0');
					_putchar('\n');
					_m++;
				}
				_m = 0;
				mm++;
			}
			_m = 0;
			mm = 0;
			_h++;
		}
		_m = 0;
		mm = 0;
		_h = 0;
		hh++;
	}
}
