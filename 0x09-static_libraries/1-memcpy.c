#include "main.h"
/**
 * _memcpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int p = 0;
int i = n;

for (; p < i; p++)
{
dest[p] = src[p];
n--;
}
return (dest);
}
