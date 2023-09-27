#include "lists.h"


/**
 * pop_listint - Entry point
 * @head: is a double pointer
 * Return: head node date or 0 if linked list is NULL
 */


int pop_listint(listint_t **head)
{
	int K;
	listint_t *temp;

	if (*head == NULL || head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	K = (*temp).n;
	free(temp);
	return (K);
}
