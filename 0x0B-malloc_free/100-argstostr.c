#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Entry point
 * @ac: input
 * @av: input
 * Return: The args one line at a time
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int ct = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (a < ac)
	{
		b = 0;
		while (av[a][b] != '\0')
		{
			ct++;
			b++;
		}
		a++;
	}
	ct = ct + ac + 1;
	str = malloc(sizeof(char) * ct);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			str[c] = av[a][b];
			c++;
		}
		str[c] = '\n';
		c++;
	}
	return (str);
}
