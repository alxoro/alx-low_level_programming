#include "lists.h"
/**
 * sum_listint - for calculating sum of data in the list
 * @head:the first node in the list
 * Return: the resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
