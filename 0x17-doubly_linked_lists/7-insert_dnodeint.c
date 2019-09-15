#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: pointer to first node.
 * @idx: given node index.
 * @n: data to store in the new node.
 * Return: return the address of the new node, or NULL if it failed or
 * if it is not possible to add the new node at index idx.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *cursor;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	cursor = *h;
	if (idx == 0 || (idx == 0 && *h == NULL))
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = *h;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	if (cursor != NULL)
		while (cursor->prev != NULL)
			cursor = cursor->prev;
	for (i = 0; cursor != NULL; i++, cursor = cursor->next)
	{
		if (i == (idx - 1) && idx != 0)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->prev = cursor;
			if (cursor->next != NULL)
			{
				new->next = cursor->next;
				cursor->next->prev = new;
			}
			else
				new->next = NULL;
			cursor->next = new;
			return (new);
		}
	}
	return (NULL);
}
