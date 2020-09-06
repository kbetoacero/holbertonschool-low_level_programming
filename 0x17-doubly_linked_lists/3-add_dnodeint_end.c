#include "lists.h"

/**
 * add_dnodeint_end - ads a node at the end of a dlistint_t list
 * @head: head of the dlistint
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;
	dlistint_t *list = NULL;

	new = malloc(sizeof(dlistint_t));

	if (new != NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (head != NULL)
	{
		*head = new;
	}
	else
	{
		list = *head;
		while (list->next != NULL)
			list = list->next;
		new->prev = list;
		list->next = new;
	}
	return (new);
}
