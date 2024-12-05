#include "lists.h"
/**
 * list_len - function that returns the number of elements in a linked list
 * @h: First node in the list
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
