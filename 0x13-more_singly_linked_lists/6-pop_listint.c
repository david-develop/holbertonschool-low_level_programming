#include "lists.h"
/**
 * pop_listint - deletes the head node of a list.
 * @head: pointer to first node.
 * Return: returns the head node’s data (n) or 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);
	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);
	return (n);
}
