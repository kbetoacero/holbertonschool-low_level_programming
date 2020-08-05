#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: Text to be modified
 * @text_content: content to be added
 * Return: 1 on success -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n_open, n_write, size = 0;

	n_open = open(filename, O_RDWR | O_APPEND);
	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	if (n_open == -1)
		return (-1);
	while (text_content[size])
		size++;
	n_write = write(n_open, text_content, size);
	if (n_write == -1)
		return (-1);
	close(n_open);
	return (1);
}
