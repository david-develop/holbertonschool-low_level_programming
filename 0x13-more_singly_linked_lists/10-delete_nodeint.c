#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list.
 * @head: pointer to first node.
 * @index: given node index.
 * Return: return the address of the new node, or NULL if it failed or
 * if it is not possible to add the new node at index idx.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *cursor;
	unsigned int i;

	if (head == NULL)
		return (-1);
	cursor = *head;
	for (i = 0; cursor != NULL; i++)
	{
		if (i == (index - 1) && index != 0)
		{
			temp = cursor->next;
			cursor->next = temp->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		else if (index == 0)
		{
			temp = *head;
			*head = temp->next;
			temp->next = NULL;
			free(temp);
			return (1);
		}
		cursor = cursor->next;
	}
	return (-1);
}
