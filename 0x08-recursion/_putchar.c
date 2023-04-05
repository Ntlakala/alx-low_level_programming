#include <unistd.h>

/**
 * _putchar - writes a character to stdout
 *
 * This function writes a single character to the standard output stream
 * (stdout).
 *
 * @c: The character to print.
 *
 * Return: On success, the function returns the number of bytes written
 * which is always 1.
 * On error, -1 is returned, and errno is set appropriately. Note that
 * in normal usage, the return value is not important, as long as it is greater
 * than zero.
 */

int _putchar(char c)
{
	/* Write the character to stdout */
	return (write(1, &c, 1));
}
