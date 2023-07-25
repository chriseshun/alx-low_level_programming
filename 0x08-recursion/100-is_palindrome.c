#include <stddef.h>

/**
 * _strlen - Computes the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
size_t _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_check - Checks if a string is a palindrome.
 * @s: The string to check.
 * @start: The starting index of the current comparison.
 * @end: The ending index of the current comparison.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_check(char *s, size_t start, size_t end)
{
if (start >= end)
return (1);
if (s[start] != s[end])
return (0);
return (is_palindrome_check(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to check.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
size_t len = _strlen(s);
if (len == 0)
return (1);
return (is_palindrome_check(s, 0, len - 1));
}

