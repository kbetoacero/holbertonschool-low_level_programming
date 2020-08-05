#include "holberton.h"
/**
 *main - Principal functin
 * @ac: cant args
 * @av: array of args
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int n_open, n_open2, n_write, n_read = 1, n_close;
	char *buffer[2050];
	size_t size = 2050;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	n_open = open(av[1], O_RDONLY);
	if (n_open == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	n_open2 = open(av[2],  O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (n_open2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	while (n_read)
	{
		n_read = read(n_open, buffer, size);
		if (n_read == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		n_write = write(n_open2, buffer, n_read);
		if (n_read > 0)
			if (n_write == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	n_read = close(n_open);
	n_close = close(n_open2);
	if (n_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n_open), exit(100);
	if (n_close == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n_open2), exit(100);
	return (0);

}
