#include "main.h"
/**
 * rot13 - Encodes a string using ROT13
 * @str: Pointer to the string to be encoded
 *
 * Return: Pointer to the encoded string
 */
char *rot13(char *str)
{
    char *ptr = str;
    char *uppercase = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char *lowercase = "abcdefghijklmnopqrstuvwxyz";
    char *rot13_uppercase = "NOPQRSTUVWXYZABCDEFGHIJKLM";
    char *rot13_lowercase = "nopqrstuvwxyzabcdefghijklm";
    int i;

    while (*ptr != '\0')
    {
        for (i = 0; i < 26; i++)
        {
            if (*ptr == uppercase[i])
            {
                *ptr = rot13_uppercase[i];
                break;
            }
            else if (*ptr == lowercase[i])
            {
                *ptr = rot13_lowercase[i];
                break;
            }
        }
        ptr++;
    }

    return str;
}
