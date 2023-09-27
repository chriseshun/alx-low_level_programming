#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - removes the node
 * @head: is a double pointer
 * @index: …
 *
 * Return: …
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int position = 0;
	listint_t *currentNode, *tempNode;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		tempNode = (*head)->next;
		free(*head);
		*head = tempNode;
		return (1);
	}
	currentNode = *head;
	while (position < index - 1)
	{
		if (currentNode->next == NULL)
			return (-1);
		currentNode = currentNode->next;
		position++;
	}

	tempNode = currentNode->next;
	currentNode->next = tempNode->next;
	free(tempNode);
	return (1);
}
