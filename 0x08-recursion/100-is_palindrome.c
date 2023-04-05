/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);

    /* empty string or single character is a palindrome */
    if (len <= 1)
        return (1);

    /* compare first and last characters */
    if (*s != s[len - 1])
        return (0);

    /* recursively check the remaining substring */
    s[len - 1] = '\0'; /* temporarily remove the last character */
    return (is_palindrome(s + 1));
}

