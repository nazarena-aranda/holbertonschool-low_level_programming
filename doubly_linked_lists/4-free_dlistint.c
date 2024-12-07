#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head of the list
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
