#include "lists.h"

/**
 * add_dnodeint_end - ads a node at the end of a dlistint_t list
 * @head: head of the dlistint
 * @n: number of nodes
 * Return: the address of the new element, or NULL if it failed
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *list;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		list = *head;
		while (list->next != NULL)
		{
			list = list->next;
		}
		list->next = new;
		new->prev = list;
	}
	else
	{
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
