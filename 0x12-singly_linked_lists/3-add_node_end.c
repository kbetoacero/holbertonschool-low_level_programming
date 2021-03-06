#include "lists.h"

/**
* _strlen - returns lenght of a string.
* @s: string
* Return: lenght of the string
*/

int _strlen(const char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
/**
* *add_node_end - adds a node ath the end of a list_t list
* @head: pointer list
* @str: new nod content
* Return: the address of the new element, or NULL if it failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last = *head;

	if (str == NULL)
		return (NULL);

	if (strdup(str) == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (strdup(str) == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (new_node);
}
