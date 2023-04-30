#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 *
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
    int i, d, n, len, f, digit;

    i = 0;
    d = 0;
    n = 0;
    len = 0;
    f = 0;
    digit = 0;

    /* get length of input string */
    while (s[len] != '\0')
        len++;

    /* parse the integer from the string */
    while (i < len && f == 0)
    {
        /* check for a negative sign */
        if (s[i] == '-')
            ++d;

        /* if character is a digit, convert it to an int */
        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0';
            if (d % 2)
                digit = -digit;
            n = n * 10 + digit;
            f = 1;
            if (s[i + 1] < '0' || s[i + 1] > '9')
                break;
            f = 0;
        }
        i++;
    }

    /* if no digits were found, return 0 */
    if (f == 0)
        return (0);

    return (n);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
    int result, num1, num2;

    /* check for correct number of arguments */
    if (argc < 3 || argc > 3)
    {
        printf("Error\n");
        return (1);
    }

    /* convert input strings to integers */
    num1 = _atoi(argv[1]);
    num2 = _atoi(argv[2]);

    /* perform multiplication and print result */
    result = num1 * num2;
    printf("%d\n", result);

    return (0);
}

