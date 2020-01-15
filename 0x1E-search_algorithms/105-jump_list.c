#include "search_algos.h"
#include <math.h>

/**
 * linear_mod - function that searches for a value in an linked list
 * using the Linear search algorithm
 * @start_n: a pointer to the first node
 * @start: initial index
 * @end: final index
 * @value: is the value to search for
 * Return: pointer to the first node where value is located or NULL if value
 * is not present in head or if head is NULL.
 */

listint_t *linear_mod(listint_t *start_n, size_t start, size_t end, int value)
{
	size_t i;

	if (start_n == NULL)
		return (NULL);

	for (i = start; i <= end; i++, start_n = start_n->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int) i, start_n->n);
		if (start_n->n == value)
			return (start_n);
	}
	return (NULL);
}

/**
 * jump_list - function that searches for a value in a sorted list of
 * integers using the Jump search algorithm.
 * @list: pointer to the head of the list to search in
 * @size: the number of nodes in list
 * @value: is the value to search for
 * Return: pointer to the first node where value is located or NULL if value
 * is not present in head or if head is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t start, end, block_s;
	listint_t *end_n, *start_n;

	block_s = sqrt(size);

	if (list == NULL)
		return (NULL);

	for (end_n = list, start_n = list; end_n->index != block_s;
	     end_n = end_n->next)
		;
	for (start = 0, end = block_s; end < size && end_n->next;)
	{
		printf("Value checked at index [%d] = [%d]\n", (int) end, end_n->n);
		if (start_n->n > value && start == 0)
			return (NULL);
		else if (end_n->n >= value)
			break;
		for (end += block_s; end_n->index != end && end_n->next; end_n = end_n->next)
		{
			start_n = start_n->next;
			start = end - block_s;
		}
	}

	if (end >= size - 1)
	{
		start_n = start_n->next;
		printf("Value checked at index [%d] = [%d]\n", (int) (size - 1), end_n->n);
		printf("Value found between indexes [%d] and [%d]\n", (int) start,
		       (int) (size - 1));
		return (linear_mod(start_n, start, size - 1, value));
	}

	printf("Value found between indexes [%d] and [%d]\n", (int) (end - block_s),
	       (int) (end));
	return (linear_mod(start_n, start, end, value));
}
