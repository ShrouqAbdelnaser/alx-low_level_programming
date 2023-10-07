#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int lc = 'a';

	while (lc <= 'z')
	{
		if (lc == 'e' || lc == 'q')
		{
			lc += 1;
		}
		else
		{
			putchar(lc);
			lc += 1;
		}
	}
	putchar('\n');
	return (0);
}
