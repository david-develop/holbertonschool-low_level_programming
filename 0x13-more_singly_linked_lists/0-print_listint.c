#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: address of head node.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		elements++;
	}
	return (elements);
}
