#include "main.h"

/**
 * _strstr - finds the first occurrence
 * of the substring needle in the string haystack
 * @haystack: pointer to string to search in
 * @needle: pointer to substring to search for
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	size_t i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}

	return (NULL);
}

