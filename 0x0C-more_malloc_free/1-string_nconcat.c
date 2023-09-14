#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 * @n: Number of characters to concatenate from s2
 *
 * Return: A pointer to the concatenated string or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int f = 0;
    unsigned int a, b;
    char *cat;

    if (s1 == NULL)
        s1 = "";

    if (s2 == NULL)
        s2 = "";

    while (*(s1 + f))
        f++;
    cat = malloc(sizeof(*cat) * f + n + 1);
    if (cat == NULL)
        return (NULL);

    for (a = 0, b = 0; a < (f + n); a++)
    {
        if (a < f)
        {
            *(cat + a) = *(s1 + a);
        }
        else
        {
            cat[a] = s2[b];
            b++;
        }
    }
    cat[a] = '\0';
    return (cat);
}
