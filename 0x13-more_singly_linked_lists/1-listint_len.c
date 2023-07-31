#include "lists.h"
/**
 * listint_len -this one returns elements of a linked list
 * @h: it is a linked list
 * Return:the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
