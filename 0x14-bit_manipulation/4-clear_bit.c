#include "holberton.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @index: the index,strarting from 0 of the bit you want to set
* @n: number to print
* Return: 1 if it worked or -1 if an error occurred
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else
	{
		*n = *n & ~(1 << index);
		return (1);
	}
}
