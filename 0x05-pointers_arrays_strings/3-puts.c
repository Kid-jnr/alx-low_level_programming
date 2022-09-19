#include "main.h"
/**
 * _puts - prints a string and new line
 * @text: string to print
 */
void _puts(char *text)
{
	while (*text != '\0')
	{
		_putchar(*text++);
	}
	_putchar('\n');
}
