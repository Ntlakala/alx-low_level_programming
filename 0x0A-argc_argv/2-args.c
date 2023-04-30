#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int d;

	for (d = 0; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}

	return (0);
}
