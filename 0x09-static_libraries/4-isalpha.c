#include "main.h"
/**
 * _isalpha - Entry point
 * @c: input
 * Return: 1 if c is letter and return 0 if its not
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
