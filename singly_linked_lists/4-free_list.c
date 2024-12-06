#include "lists.h"
/**
 * free_list - Frees a list
 * @head: Pointer to the head of the list
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
