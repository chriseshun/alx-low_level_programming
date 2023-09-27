#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * @head: is a double pointer
 * @idx: index
 * @n: input value
 *
 * Return: …
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int position = 0;
	listint_t *currentNode;
	listint_t *newNode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		currentNode = *head;
		while (position < idx - 1 && currentNode != NULL)
		{
			currentNode = currentNode->next;
			position++;
		}
		if (currentNode == NULL)
			return (NULL);
	}

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
