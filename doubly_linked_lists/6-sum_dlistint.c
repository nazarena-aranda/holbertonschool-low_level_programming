#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a linked list
 * @head: head of the list
 * Return: sum of the n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
