#include "main.h"
#include <stdio.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the
 * string haystack.
 * @haystack: pointer to string to search in
 * @needle: pointer to substring to search for
 *
 * Return: pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h = haystack;
	char *n = needle;

	while (*h != '\0')
	{
		if (*h == *n)
		{
			char *begin = h;
			char *match = n;

			while (*h == *n && *h != '\0' && *n != '\0')
			{
				h++;
				n++;
			}

			if (*n == '\0')
				return (begin);

			h = begin + 1;
			n = match;
		}
		else
			h++;
	}

	return (NULL);
}

