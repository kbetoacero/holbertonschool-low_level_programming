#include "lists.h"

/* print_list - prints all the elements of a list_t list
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t temp = 0;

	while (h != NULL)
	{
		if (h->str== NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
			temp++;
			h = h->next;
	}
	return(temp);
}


/**
* _strlen - returns lenght of a string.
* @s: string
* Return: lenght of the string


int _strlen(char *s)
{
	int len;


	while (*s != NULL)
	{
		s++;
		len++;
	}
	return (len);
}*/
