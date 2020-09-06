#include "lists.h"

/**
 * add_dnodeint - adds a node at the beggining of a dlistint_t list
 * @head: head of a dllist
 * @n: nodes added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));

	
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
	}
	else
		return (NULL);

	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
