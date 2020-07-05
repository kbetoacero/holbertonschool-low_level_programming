#include <stdio.h>
#include <stdlib.h>

/**
* main - function that prints all the arguments it receives
* @argc : Number of command line arguments
* @argv : An array containing the program command line arguments
* Return: 0
*/

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
