#include <stdio.h>
#include <stdlib.h>

/**
* main - prints a functions name
* @argc : Number of command line arguments
* @argv : An array containing the program command line arguments
* Return: 0
*/

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
