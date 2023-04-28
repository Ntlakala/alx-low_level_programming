#include <stdlib.h>
#include "lists.h"

/**
 * list_len returns the number of lements in a linked list
 * @h: pointer to the list_t list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t d = 0;

	while (h)
	{
		d++;
		h = h->next;
	}
	return (d);
}
