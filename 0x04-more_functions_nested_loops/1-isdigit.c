#include "main.h"
#include<stdio.h>

/**
 * if input is a digit
 * 
 * Return 1 if it is a digit, 0 if it is not digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
