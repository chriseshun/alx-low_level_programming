#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: is a pointer
 * @n: is another pointer
 *
 * Return: address of the new element
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *cp;

	cp = malloc(sizeof(listint_t));
	if (cp == NULL || head == NULL)
		return (NULL);
	{
		cp->n = n;
		cp->next = *head;
		*head = cp;
	}

	return (*head);
}
