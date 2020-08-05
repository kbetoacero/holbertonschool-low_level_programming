#include "holberton.h"
/**
 * read_textfile - Funtion reads text file and prints it to the POXIS
 *  standard output
 * @filename: input file
 * @letters: Number of characters
 * Return: size
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int n_read, n_write, n_open;
	char *file = malloc(sizeof(char) * letters);

	if (!filename || !file)
		return (0);
	n_open = open(filename, O_RDONLY);
	n_read = read(n_open, file, letters);
	n_write = write(STDOUT_FILENO, file, n_read);

	if (n_open == -1 || n_write == -1 || n_read == -1)
		return (free(file), 0);
	free(file);
	close(n_open);
	return (n_write);

}
