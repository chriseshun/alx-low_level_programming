#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t list
 * @head: Pointer to the head of the list
 *
 * Return: Number of nodes in the list
 */
size_t print_list(const list_t *head)
{
size_t node_count = 0;
while (head)
{
if (head->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", head->len, head->str);
node_count++;
head = head->next;
}
return (node_count);
}
