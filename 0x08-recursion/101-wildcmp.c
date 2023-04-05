#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if they can be considered
 * identical, otherwise returns 0
 * @s1: first string
 * @s2: second string, can contain the special character *
 *
 * Return: 1 if the strings are identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
    /* if both strings are empty, they're identical */
    if (*s1 == '\0' && *s2 == '\0')
        return (1);

    /* if the current characters match, move to the next */
    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    /* if s2 has a wildcard, try to match the rest of s1 */
    if (*s2 == '*')
    {
        /* skip consecutive wildcards */
        while (*(s2 + 1) == '*')
            s2++;

        /* if the wildcard is the last character, they match */
        if (*(s2 + 1) == '\0')
            return (1);

        /* try to match the rest of s1 after the wildcard */
        if (*s1 != '\0' && wildcmp(s1 + 1, s2))
            return (1);
    }

    /* if we got here, the strings are different */
    return (0);
}

