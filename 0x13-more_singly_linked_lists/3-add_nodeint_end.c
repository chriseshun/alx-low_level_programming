#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer
 * @n: input
 *
 * Return: the address of the new element
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ch = NULL;
	listint_t *new = NULL;

	ch = malloc(sizeof(listint_t));
	if (ch)
	{
		ch->n = n;
		ch->next = NULL;
		if (*head)
		{
			new = *head;
			while (new->next)
				new = new->next;
			(*new).next = ch;
		}
		else
			*head = ch;
	}

	return (ch);
}
