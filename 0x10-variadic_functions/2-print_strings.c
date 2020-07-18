#include "variadic_functions.h"

/**
* print_strings- print any string
* @n : number of strings passed to the function
* @separator : string to be printed between the strings
* Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *temp;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(ap, char *);

		if (temp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", temp);
		}

		if (separator && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
