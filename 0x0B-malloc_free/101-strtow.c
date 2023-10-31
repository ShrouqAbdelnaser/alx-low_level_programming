#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * number - function to calculate number of words
 * @str: string being passed to check for words
 * Return: number of words
 */
int number(char *str)
{
	int a, n = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			n++;
		}
	}
	return (n);
}

/**
 * free_everything - frees the memory
 * @string: pointer values being passed for freeing
 * @i: counter
 */
void free_everything(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - function that splits string into words
 * @str: string being passed
 * Return: null if string is empty or null or function fails
 */
char **strtow(char *str)
{
	int tw = 0, b = 0, c = 0, length = 0;
	char **w, *fw;

	if (str == 0 || *str == 0)
		return (NULL);
	tw = number(str);
	if (tw == 0)
		return (NULL);
	w = malloc((tw + 1) * sizeof(char *));
	if (w == 0)
		return (NULL);
	for (; *str != '\0' &&  b < tw;)
	{
		if (*str == ' ')
			str++;
		else
		{
			fw = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++;
				str++;
			}
			w[b] = malloc((length + 1) * sizeof(char));
			if (w[b] == 0)
			{
				free_everything(w, b);
				return (NULL);
			}
			while (*fw != ' ' && *fw != '\0')
			{
				w[b][c] = *fw;
				fw++;
				c++;
			}
			w[b][c] = '\0';
			b++, c = 0, length = 0, str++;
		}
	}
	return (w);
}
