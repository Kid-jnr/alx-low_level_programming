#include "main.h"
#include <stdio.h>

/**
 * _isupper - return if int c is uppercase
 *
 * Return: 1 if c is uppercase, 0 if it is not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
