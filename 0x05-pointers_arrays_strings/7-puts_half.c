#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: The string to print
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int n;
	int c = 0;

	for (i = 0; str[i] != '\0'; i++)
		c++;
	n = (c - 1) / 2;
	for (i = n + 1; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
