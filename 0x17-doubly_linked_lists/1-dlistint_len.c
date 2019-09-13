#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: given list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int elements = 0;

	for (; h != NULL; h = h->next, elements++)
		;
	return (elements);
}
