/**
 * wildcmp - compares two strings that can contain wildcard characters
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return: 1 if the strings can be considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0') /* both strings ended */
		return (1);
	if (*s1 == *s2) /* characters match, continue */
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s2 == '*') /* found wildcard in s2, continue */
	{
		if (*(s2 + 1) == '\0') /* wildcard is at the end of s2 */
			return (1);
		if (*s1 == '\0') /* s1 ended, but s2 has * folwd more crctrs */
			return (0);
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0); /* characters dont match and no wildcard, strings differ */
}

