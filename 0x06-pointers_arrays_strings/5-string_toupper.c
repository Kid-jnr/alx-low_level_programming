#include "main.h"
/**
 * string_toupper - converts characters in a string to uppercase
 *
 * @a: string to convert
 *
 * Return: character array
 */
char *string_toupper(char *a)
{
	char *b = a;

	while (*b != '\0')
	{
		if (*b >= 'a' && *b <= 'z')
			*b -= 32;
		b++;
	}
	return (a);
}
