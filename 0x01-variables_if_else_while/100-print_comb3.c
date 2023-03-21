#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = i + 1; j <= '9'; j++)
{
if (i < j && i != j)
{
putchar(i);
putchar(j);
{
if (i != '8' || j != '9')
{
putchar(' ');
putchar(',');
}
}
}
}
}
return (0);
}

