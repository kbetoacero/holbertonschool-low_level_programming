#include "holberton.h"

/**
<<<<<<< HEAD
* factorial : returns the factorial of a given number
=======
* factorial - returns the factorial of a given number
>>>>>>> bcf8ea824076043dd1658e101415ff4183e43741
* @n: number
* Return: factorial
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	else if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (n * (factorial(n - 1)));
	}
}
