#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to append to
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	/* check if filename is NULL */
	if (filename == NULL)
		return (-1);

	/* open the file for appending and writing, create it if not  exist */
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1) /* check if open failed */
		return (-1);

	/* if text_content is not NULL, calculate its length */
	if (text_content != NULL)
		len = _strlen(text_content);
	else
		len = 0;

	/* write text_content to the file */
	bytes_written = write(fd, text_content, len);
	if (bytes_written == -1) /* check if write failed */
		return (-1);

	/* close the file */
	close(fd);

	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	/* loop through the string until the null terminator is reached */
	while (*s != '\0')
	{
		len++; /* increment the length */
		s++; /* move to the next character */
	}

	return (len);
}

