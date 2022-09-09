#include <stdio.h>

/**
 * main - a simple program that outputs unordered
 * combinations of two digit integers without duplicates
 *
 * Return: 0 on success
 */
int main(void)
{
	int ast;
	int a;
	int bfirst;
	int b;

	for (ast = 48; ast < 58; ast++)
	{
		for (a = 48; a < 58; a++)
		{
			b = a + 1;
			bfirst = ast;
			for (; bfirst < 58; bfirst++)
			{
				for (; b < 58; b++)
				{
					putchar(ast);
					putchar(a);
					putchar(' ');
					putchar(bfirst);
					putchar(b);
					if (ast != 57 || bfirst != 57 || a != 56 || b != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
				b = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}
