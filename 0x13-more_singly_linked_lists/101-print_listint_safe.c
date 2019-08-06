#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to first node.
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int i, count = 0;
	const listint_t *cursor;
	const listint_t *temp = NULL;
	const listint_t **arr;

	cursor = head;
	arr = malloc(sizeof(listint_t *));
	arr[0] = cursor;
	while (cursor != NULL)
	{
		if (cursor->next)
			temp = cursor->next;
		else
			temp = NULL;
		for (i = 0; i <= count; i++)
		{
			if (temp == arr[i])
			{
				printf("[%p] %d\n", (void *)cursor, cursor->n);
				printf("->[%p] %d\n", (void *)temp, temp->n);
				exit(98);
			}
		}
		arr[count + 1] = temp;
		printf("[%p] %d\n", (void *)cursor, cursor->n);
		cursor = cursor->next;
		count++;
		}
	return (count);

}
