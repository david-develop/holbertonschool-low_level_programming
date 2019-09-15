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
	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	if (cursor != NULL)
		while (cursor->prev != NULL)
			cursor = cursor->prev;
	for (i = 1; cursor != NULL; i++, cursor = cursor->next)
	{
		if (i == idx)
		{
			if (cursor->next == NULL)
			{
				new = add_dnodeint_end(h, n);
				return (new);
			}
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->n = n;
			new->next = cursor->next;
			new->prev = cursor;
			cursor->next->prev = new;
			cursor->next = new;
			return (new);
		}
	}
	return (NULL);
}
