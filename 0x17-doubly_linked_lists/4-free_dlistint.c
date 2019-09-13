#include "lists.h"
/**
 * free_dlistint - frees a listint_t list.
 * @head: pointer to first node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *cursor;

	while (head != NULL)
	{
		cursor = head;
		head = head->next;
		free(cursor);
	}
	free(head);
}
