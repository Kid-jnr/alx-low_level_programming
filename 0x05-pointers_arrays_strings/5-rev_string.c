#include "main.h"

/**
* rev_string - Reverses a string
* @a: Input string
* Return: reverse string
**/

void rev_string(char *a)
{
	char var = a[0];
	int count = 0;
	int i;

	while (a[count] != '\0')
		count++;
	for (i = 0; i < count; i++)
	{
		count--;
		var = a[i];
		a[i] = a[count];
		a[count] = var;
	}
}
