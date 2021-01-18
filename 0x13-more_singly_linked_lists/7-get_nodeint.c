#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index - Return node at index
 * @head: First node
 * @index: Node to return
 * Return: listint_t
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (head != NULL && index--)
	{
		head = (head->next != NULL ? head->next : NULL);
	}
	return (head);

}
