#include "main.h"

/**
 * wildcmp_helper - compares two strings recursively, allowing for wildcard
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if strings match, 0 otherwise
 */
int wildcmp_helper(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return (wildcmp_helper(s1, s2 + 1));
        else if (*s1 == '\0')
            return (wildcmp_helper(s1, s2 + 1));
        else
            return (wildcmp_helper(s1 + 1, s2) || wildcmp_helper(s1, s2 + 1));
    }
    else if (*s1 != *s2)
        return (0);
    else if (*s1 == '\0' && *s2 == '\0')
        return (1);
    else
        return (wildcmp_helper(s1 + 1, s2 + 1));
}

/**
 * wildcmp - compares two strings recursively, allowing for wildcard
 * @s1: first string to compare
 * @s2: second string to compare (may contain wildcard)
 *
 * Return: 1 if strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '\0')
            return (1);
        else
            return (wildcmp_helper(s1, s2));
    }
    else
    {
        if (*s1 != *s2)
            return (0);
        else if (*s1 == '\0' && *s2 == '\0')
            return (1);
        else
            return (wildcmp(s1 + 1, s2 + 1));
    }
}

