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
 * add_node_end - Function that adds a new node at the end of a list_t list.
 * @head: A double pointer to the head of the list.
 * @str: The string to be duplicated and added to the list.
 * Return: The address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node;
    list_t *temp_node;

    if (str != NULL)
    {
        new_node = malloc(sizeof(list_t));
        if (new_node == NULL)
            return (NULL);
        
        new_node->str = strdup(str);
        new_node->len = _strlen(str);
        new_node->next = NULL;

        if (*head == NULL)
        {
            *head = new_node;
            return (*head);
        }
        else
        {
            temp_node = *head;

            while (temp_node->next)
                temp_node = temp_node->next;

            temp_node->next = new_node;
            return (temp_node->next);
        }
    }

    return (NULL);
}
