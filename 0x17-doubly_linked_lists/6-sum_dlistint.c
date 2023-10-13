#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) in list
 * @head: lists's head
 * Return: total data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;
	if (head != NULL)
	{
	while (head->prev != NULL)
	head = head->prev;
	while (head != NULL)
	{
	sum += head->n;
	head = head->next;
	}
	}
	return (sum);
}
