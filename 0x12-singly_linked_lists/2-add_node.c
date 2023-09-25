#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strlen - Function that returns the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(const char *s)
{
    int length = 0;

    while (*s)
    {
        s++;
        length++;
    }

    return (length);
}

/**
 * add_node - Function that adds a new node
 * @head: A pointer to a pointer to the head of the list.
 * @str: The string to be duplicated and added to the list.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;

    if (head != NULL && str != NULL)
    {
        new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
            return (NULL);

        new_node->len = _strlen(str);
        new_node->str = strdup(str);
        new_node->next = *head;
        *head = new_node;

        return (new_node);
    }

    return (NULL);
}
