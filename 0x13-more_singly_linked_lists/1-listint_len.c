#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: address of head node.
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
