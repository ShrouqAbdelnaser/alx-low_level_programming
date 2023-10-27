#include "main.h"
/**
 * _memset - frogram fills a block of memory with a specific value
 * @s: input
 * @b: input
 * @n: input
 * Return: change array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int a = 0;

for (; n > 0; a++)
{
s[a] = b;
n--;
}
return (s);
}
