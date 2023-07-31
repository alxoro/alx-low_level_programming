#include "lists.h"
/**
 * pop_listint - for deletion of head node of a linked list
 * @head: the pointer to the first element in a linked list
 * Return:data inside element deleted or 0if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
