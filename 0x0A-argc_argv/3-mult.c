#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc : Number of command line arguments
* @argv : An array containing the program command line arguments
* Return: 0
*/

int main(int argc, char **argv)
{
	int mult = 1;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	return (0);
}
