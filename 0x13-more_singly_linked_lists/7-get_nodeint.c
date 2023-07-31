#include "lists.h"
/**
 * get_nodeint_at_index - for returning node ata specific index
 * @head:the initial node
 * @index:index of node to return
 * Return:the pointer to the node searched otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
