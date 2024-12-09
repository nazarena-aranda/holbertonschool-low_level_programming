#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a specific index
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		if (*head)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	while (node != NULL && i < index)
	{
		node = node->next;
		i++;
	}

	if (!node)
		return (-1);

	if (node->prev)
		node->prev->next = node->next;
	if (node->next)
		node->next->prev = node->prev;

	free(node);
	return (1);
}
