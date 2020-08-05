#include "holberton.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: the content of filename
 * Return: 1 on success -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int n_open, n_write, size = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
		while (text_content[size])
			size++;
	n_open = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	n_write = write(n_open, text_content, size);

	if (n_open == -1 || n_write == -1)
		return (-1);
	close(n_open);
	return (1);
}
