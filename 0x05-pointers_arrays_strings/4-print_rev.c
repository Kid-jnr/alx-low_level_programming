#include "main.h"
/**
 * print_rev - imprime en reversa
 * @a: string
 * return: 0
 */
void print_rev(char *a)
{
	int i = 0;
	int o;

	while (*a != '\0')
	{
		i++;
		a++;
	}
	a--;
	for (o = i; o > 0; o--)
	{
		_putchar(*a);
		a--;
	}

	_putchar('\n');
}
