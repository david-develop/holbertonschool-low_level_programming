#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to first node.
 * @idx: given node index.
 * @n: data to store in the new node.
 * Return: return the address of the new node, or NULL if it failed or
 * if it is not possible to add the new node at index idx.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *cursor;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	cursor = *head;
	if (idx == 0 || (idx == 0 && *head == NULL))
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; cursor != NULL; i++)
	{
		if (i == (idx - 1) && idx != 0)
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = cursor->next;
			cursor->next = new;
			return (new);
		}
		cursor = cursor->next;
	}
	return (NULL);
}
