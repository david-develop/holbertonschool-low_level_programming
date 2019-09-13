#include "lists.h"
/**
 * get_dnodeint_at_index - get the given node index in a dlistin_t list.
 * @head: pointer to first node.
 * @index: node index looked.
 * Return:  returns the nth node of a listint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *cursor = NULL;

	if (head == NULL)
		return (NULL);
	cursor = head;
	for (i = 0; cursor != NULL; i++)
	{
		if (index == 0)
			return (cursor);
		cursor = cursor->next;
		if (i == (index - 1) && index != 0)
		{
			return (cursor);
		}
	}
	return (NULL);
}
