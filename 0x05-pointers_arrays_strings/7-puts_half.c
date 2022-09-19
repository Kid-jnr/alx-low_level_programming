#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * @str: input
 * Return: input/2
 */
void puts_half(char *str)
{
	int a, b, i;

	i = 0;

	for (a = 0; str[a] != '\0'; a++)
		i++;

	b = (i / 2);

	if ((i % 2) == 1)
		b = ((i + 1) / 2);

	for (a = b; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
