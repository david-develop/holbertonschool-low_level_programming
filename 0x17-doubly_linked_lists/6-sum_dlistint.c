#include "lists.h"
/**
 * sum_dlistint - calculate the sum of all the data (n) of a listint_t list
 * @head: pointer to first node.
 * Return: return the sum of all data.
 */
int sum_dlistint(dlistint_t *head)
{
	unsigned int i;
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);
	for (i = 0; head != NULL; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
