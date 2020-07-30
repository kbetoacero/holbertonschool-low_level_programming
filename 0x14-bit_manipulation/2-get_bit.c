#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: value of a bit
* @index: index of the binary number
* Return: retunr the value of a biot at a given index
*/


int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 64)
	{
		return (-1);
	}
	else
	{
		value = (n >> index) & 1;
		return (value);
	}
}
