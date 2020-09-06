#include "lists.h"

/**
* print_dlistint - prints all the elements of a dlistint_t list
* @h: head of the linked list
* Return: the number of nodes
*/

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *list = h;

	while(list != NULL)
	{
		printf("%i\n", list->n);
		list = list->next;
		i++;
	}
	return (i);
}
