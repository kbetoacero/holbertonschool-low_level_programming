#include "lists.h"

/**
* list_len - retunrs the number of elements in a linked list_t list
* @h: pointer to head
* Return: number of elements in a linked list
*/

size_t list_len(const list_t *h)
{

	size_t temp = 0;

	while (h != NULL)
	{
		temp++;
		h = h->next;
	}
	return (temp);
}
