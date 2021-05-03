#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head of a linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *list = h;

	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}
