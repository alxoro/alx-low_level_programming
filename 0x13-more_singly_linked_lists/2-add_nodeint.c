#include "lists.h"
/**
 * add_nodeint - for addition of new node at the start
 * @head:the pointer to the fisrt node in the list
 * @n: the data to be inserted in the list
 * Return: the pointer to the new node or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
