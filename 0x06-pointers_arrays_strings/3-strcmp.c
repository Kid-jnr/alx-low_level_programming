#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: second string to compare
 *
 * Return: 1 if s1 greater
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != 0 || *s2 != 0)
	{
		if (*s1 > *s2)
			return (*s1 - *s2);
		if (*s1 < *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
