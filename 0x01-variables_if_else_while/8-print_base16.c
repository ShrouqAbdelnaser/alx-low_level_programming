#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	char lt;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (lt = 'a'; lt <= 'f'; lt++)
		putchar(lt);

	putchar('\n');

	return (0);
}
