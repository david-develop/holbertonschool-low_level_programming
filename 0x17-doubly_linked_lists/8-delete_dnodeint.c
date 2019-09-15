#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to first node.
 * @index: given node index.
 * Return: 1 if it succeeded or -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *cursor;
	unsigned int i;

	if (head == NULL)
		return (-1);
	cursor = *head;
	for (i = 0; cursor != NULL; i++, cursor = cursor->next)
	{
		if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			if (temp->next != NULL)
				temp->next->prev = NULL;
			free(temp);
			return (1);
		}
		if (i == (index - 1))
		{
			if (cursor->next == NULL)
				break;
			temp = cursor->next;
			if (temp->next == NULL)
			{
				cursor->next = NULL;
				free(temp);
				return (1);
			}
			cursor->next = temp->next;
			temp->next->prev = cursor;
			free(temp);
			return (1);
		}
	}
	return (-1);
}
