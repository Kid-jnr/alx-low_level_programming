#include "main.h"

/**
 * _strcat - concatenates 2 strings
 *
 * @dst: destination
 * @src: source
 *
 * Return: destination array
 */
char *_strcat(char *dst, char *src)
{
	char *ptr = dst;

	while (*ptr != 0)
		ptr++;
	while (*src != 0)
		*ptr++ = *src++;
	*ptr = 0;

	return (dst);
}
