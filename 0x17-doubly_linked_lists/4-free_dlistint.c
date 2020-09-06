#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list
 * @head: head of a dllist_t
 * Return: Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head, *aux;

	while (list != NULL)
	{
		aux = list->next;
		free(list);
		list = aux;
	}
}
