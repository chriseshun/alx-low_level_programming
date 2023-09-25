#include "lists.h"

/**
 * _strlen - Computes the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
int text = 0;

while (*s)
{
s++;
text++;
}
return (text);
}

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be duplicated and stored in the new node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *add;
list_t *tN;

if (str != NULL)
{
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
add->len = _strlen(str);
add->next = NULL;

if (*head == NULL)
{
*head = add;
return (*head);
}
else
{
tN = *head;

while (tN->next)
tN = tN->next;
tN->next = add;
return (tN);
}
}
return (NULL);
}
