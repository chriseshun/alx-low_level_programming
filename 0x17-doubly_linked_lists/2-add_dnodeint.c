#include "lists.h"

/**
 * add_dnodeint - add a new node at the beginning
 * @head: A pointer to the address of the head of the dlistint_t list
 * @n: The integer to store in the new node
 *
 * Return: The address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;

	new_node-> = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_mode;

	*head = new_mode;

	return new_mode;
}
