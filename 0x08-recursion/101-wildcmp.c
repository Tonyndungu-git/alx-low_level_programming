#include "main.h"

/**
 * wildcmp - function that compares two strings using recursion.
 * @s1: pointer to string 1.
 * @s2: pointer to string 2.
 * Return: interger.
 */

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	else if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	else
	{
		return (0);
	}
}
