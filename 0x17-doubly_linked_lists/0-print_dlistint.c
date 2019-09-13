#include "lists.h"
/**
 * print_dlistint - prints all the elements of a list_t list.
 * @h: given list.
 * Return: number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int elements = 0;

	for (; h != NULL; h = h->next, elements++)
		printf("%d\n", h->n);
	return (elements);
}
