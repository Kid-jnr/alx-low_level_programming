#include <stdio.h>
#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @to: copy to
 * @from: copy from
 * Return: string
 */
char *_strcpy(char *to, char *from)
{
	int l = 0;
	int x = 0;

	while (*(from + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		to[x] = from[x];
	}
	to[l] = '\0';
	return (to);
}
