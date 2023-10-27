#include "main.h"
/**
 * _puts - Entry point
 * @str: input
 * _putchar prints a new line
 */
void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
