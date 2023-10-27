#include "main.h"
/**
 * _strncat - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: entered value
 */
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;

a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (dest[a] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
