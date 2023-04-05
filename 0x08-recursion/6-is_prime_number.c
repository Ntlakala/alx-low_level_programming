/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
    /* Base case: 0 and 1 are not prime */
    if (n < 2)
        return (0);

    /* Check for divisibility up to the square root of n */
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return (0);
    }

    return (1);
}

