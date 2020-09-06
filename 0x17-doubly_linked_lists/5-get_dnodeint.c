#include "lists.h"

/**
 * get_dnodeint_at_index - Return th nth node of a dlistint_t
 * linked list
 * @head: head of the dlistint_t
 * @index: index
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
	head = head->next;
	i++;	
	}
	return (NULL);
}
