#include "main.h"

/**
 * factorial - function that returns the length of a string
 * @n: input
 * Return: int
 */

int factorial(int n)
{

if (n < 0)
{
return (-1);
}
else if (n == 0)
{
return (1);
}

return (n * factorial(n - 1));

}
