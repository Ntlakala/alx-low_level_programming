/**
 * is_prime_helper - helper function to recursively check if a number is prime
 * @n: number to check if prime
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0 || n % (i + 2) == 0)
		return (0);
	return (is_prime_helper(n, i + 6));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not prime
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	if (n % 2 == 0 || n % 3 == 0)
		return (0);
	return (is_prime_helper(n, 5));
}

