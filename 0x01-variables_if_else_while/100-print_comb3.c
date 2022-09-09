#include <stdio.h>

/**
 * main - Print combinations of two digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;
	int p;

	for (t = 0; t <= 9; t++)
	{
		for (p = t + 1; p <= 9; p++)
		{
			putchar(t + '0');
			putchar(p + '0');

			if (t < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
