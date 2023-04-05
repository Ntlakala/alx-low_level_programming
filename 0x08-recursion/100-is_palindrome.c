#include "main.h"

/**
 * check_pal - checks if a string is a palindrome
 * @s: string to check
 * @i: current index to check
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int check_pal(char *s, int i, int len);

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	/* base case */
	if (*s == 0)
		return (1);

	return (check_pal(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks if a string is a palindrome recursively
 * @s: string to check
 * @i: current index to check
 * @len: length of the string
 *
 * Return: 1 if the string is a palindrome, 0 if not
 */
int check_pal(char *s, int i, int len)
{
	/* check if characters at the beginning and end of the string match */
	if (*(s + i) != *(s + len - 1))
		return (0);

	/* base case */
	if (i >= len)
		return (1);

	/* recursively check the remaining characters in the string */
	return (check_pal(s, i + 1, len - 1));
}

