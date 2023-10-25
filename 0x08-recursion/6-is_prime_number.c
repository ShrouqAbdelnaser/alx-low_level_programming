#include "main.h"

/**
 * is_prime_number - returns 1 if the int integer, otherwise return 0
 * @n: input
 * @othrn: input
 * Return: 0 of 1
 */

int check_prime(int n, int othrn);
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all number
 * @n: input
 * @othrn: input
 * Return: int
 */

int check_prime(int n, int othrn)
{
if (othrn >= n && n > 1)
return (1);
else if (n % othrn == 0 || n <= 1)
return (0);
else
return (check_prime(n, othrn + 1));

}
