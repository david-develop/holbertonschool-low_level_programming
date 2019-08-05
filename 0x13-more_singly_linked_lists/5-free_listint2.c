#include "lists.h"
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL.
 * @head: pointer to first node.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *cursor;

	temp = *head;

	while (temp != NULL)
	{
		cursor = temp;
		temp = temp->next;
		free(cursor);
	}
	*head = NULL;
}
