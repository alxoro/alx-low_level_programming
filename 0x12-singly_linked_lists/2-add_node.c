#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - it adds a new line at the beginning a linked list
 * @head: it is a double pointer to the list
 * @str: it is the new string to add in the node
 * Return: it is the address of the new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	unsigned int len = 0;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}

