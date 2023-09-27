#include "lists.h"



/**
 * sum_listint - function that returns the sum of all the data of list
 * @head: is a pointer
 *
 * Return: sum of all the data or 0 if empty list
 */



int sum_listint(listint_t *head)
{
	int add = 0;

	if (head)
	{
		do {
			add += head->n;
			head = head->next;
		} while (head != NULL);
	}
	else
		add = 0;
	return (add);
}
