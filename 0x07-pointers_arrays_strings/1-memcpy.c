/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to the destinatxn array where the content is to be copied.
 * @src: Pointer to the source of data to be copied.
 * @n: Number of bytes to be copied.
 * * Return: Pointer to the destination array.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	dest[i] = src[i];
	return (dest);
}

