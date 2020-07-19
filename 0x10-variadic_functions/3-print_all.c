#include "variadic_functions.h"

/**
* print_all - print char, int, float or string
* @format: string of formats
* @... : parameters
* Return: Void
*/

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *sep;

	args_a li[] = {
		{"c", li_c},
		{"i", li_i},
		{"f", li_f},
		{"s", li_s},
		{NULL, NULL},
	};

	sep = "";
	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (j <= 3)
		{
			if ((li[j].st[0]) == format[i])
			{
				printf("%s", sep);
				li[j].l(ap);
				sep = ", ";
			}
		j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);

}

/**
* li_c - print char type element
* @list: va_list passed to function
* Return: void
*/


void li_c(va_list list)
{
	printf("%c", (char)va_arg(list, int));
}

/**
* li_i - print int type element
* @list: va_list passed to function
* Return: void
*/


void li_i(va_list list)
{
	printf("%d", va_arg(list, int));
}

/**
* li_f - print float type element
* @list: va_list passed to function
* Return: void
*/


void li_f(va_list list)
{
	printf("%f", (float)va_arg(list, double));
}

/**
* li_s - print string type element
* @list: va_list passed to function
* Return: void
*/

void li_s(va_list list)
{
	char *s;

	s = va_arg(list, char *);

	if (s == NULL)
		s = "(nil)";
	printf("%s", s);
}

