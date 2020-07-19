#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
* struct args - functions and formats
* @st: parameters
* @l: function
*/

typedef struct args
{
	char *st;
	void (*l)(va_list list);
} args_a;


int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void li_c(va_list list);
void li_i(va_list list);
void li_f(va_list list);
void li_s(va_list list);

#endif /* VARIADIC_FUNCTIONS_H */
