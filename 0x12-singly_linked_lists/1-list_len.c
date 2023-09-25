#include <stdio.h>
#include "lists.h"

/**
 * list_len - Entry point
 * @h: Pointer
 *
 * Return : Output
 */

size_t list_len(const list_t *h)
{
	size_t G = 0;

		while (h != NULL)
	{
		h = h->next;

		G++;
	}
	return (G);
}
