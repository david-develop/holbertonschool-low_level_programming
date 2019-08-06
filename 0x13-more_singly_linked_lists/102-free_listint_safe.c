#include "lists.h"

/**
 * free_listpoint - frees a listpoin_t list.
 * @head: pointer to first node.
 */
void free_listpoint2(listpoin_t *head)
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
listpoin_t *add_nodepoint2(listpoin_t **head, void *p)
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
 * print_listint_safe - frees a listint_t list.
 * @h: pointer to first node.
 * Return: number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0;
	listint_t *cursor = NULL;
	listint_t *temp = NULL;
	listpoin_t *cursor2 = NULL;
	listpoin_t *head_strp = NULL;

	if (*h == NULL)
		return (0);
	add_nodepoint2(&head_strp, (void *)*h);
	for (; *h != NULL; count++)
	{
		if ((*h)->next)
			temp = (*h)->next;
		else
			temp = NULL;
		for (cursor2 = head_strp; cursor2 != NULL; cursor2 = cursor2->next)
		{
			if (temp == cursor2->p)
			{
				count++;
				free(*h);
				free_listpoint2(head_strp);
				*h = NULL;
				return (count);
			}
		}
		add_nodepoint2(&head_strp, (void *)temp);
		cursor = *h;
		*h = (*h)->next;
		free(cursor);
	}
	*h = NULL;
	free_listpoint2(head_strp);
	return (count);
}
