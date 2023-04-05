#include "main.h"

/**
 * actual_sqrt_recursion - recursively finds the natural square root of a number
 * @n: the number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	/* if n is negative, there is no natural square root, return -1 */
	if (n < 0)
		return (-1);

	/* call actual_sqrt_recursion to recursively find the square root */
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursively finds the natural square root of a number
 * @n: the number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int i)
{
	/* if the square of i is greater than n, n has no natural square root */
	if (i * i > n)
		return (-1);

	/* if the square of i is equal to n, return i */
	if (i * i == n)
		return (i);

	/* recursively call actual_sqrt_recursion with i + 1 */
	return (actual_sqrt_recursion(n, i + 1));
}

