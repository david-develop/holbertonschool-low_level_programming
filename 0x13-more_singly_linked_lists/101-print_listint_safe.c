#include "lists.h"

/**
 * free_listpoint - frees a listpoin_t list.
 * @head: pointer to first node.
 */
void free_listpoint(listpoin_t *head)
{
	listpoin_t *cursor;

	while (head != NULL)
	{
		cursor = head;
		head = head->next;
		free(cursor);
	}
	free(head);
}

/**
 * add_nodepoint - adds a new node at the beginning of a listpoin_t list.
 * @head: pointer to first node.
 * @p: given address.
 * Return: the address of the new element, or NULL if it failed.
 */
listpoin_t *add_nodepoint(listpoin_t **head, void *p)
{
	listpoin_t *temp2;

	temp2 = malloc(sizeof(listpoin_t));
	if (temp2 == NULL)
		exit(98);
	temp2->p = p;
	temp2->next = *head;
	*head = temp2;
	return (temp2);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to first node.
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *cursor = NULL;
	const listint_t *temp = NULL;
	listpoin_t *cursor2 = NULL;
	listpoin_t *head_strp = NULL;

	if (head == NULL)
		return (0);
	cursor = head;
	add_nodepoint(&head_strp, (void *)cursor);
	for (; cursor != NULL; cursor = cursor->next, count++)
	{
		if (cursor->next)
			temp = cursor->next;
		else
			temp = NULL;
		for (cursor2 = head_strp; cursor2 != NULL; cursor2 = cursor2->next)
		{
			if (temp == cursor2->p)
			{
				printf("[%p] %d\n", (void *)cursor, cursor->n);
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				count++;
				free_listpoint(head_strp);
				return (count);
			}
		}
		add_nodepoint(&head_strp, (void *)temp);
		printf("[%p] %d\n", (void *)cursor, cursor->n);
	}
	free_listpoint(head_strp);
	return (count);
}
