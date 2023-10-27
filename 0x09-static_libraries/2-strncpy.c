#include "main.h"
/**
 * _strncpy - Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: length
 */
char *_strncpy(char *dest, char *src, int n)
{
int b = 0;

while (b < n && src[b] != '\0')
{
dest[b] = src[b];
b++;
}
while (b < n)
{
dest[b] = '\0';
s++;
}
return (dest);
}
