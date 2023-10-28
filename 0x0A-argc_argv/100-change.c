#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) when successful
 */
int main(int argc, char *argv[])
{
int ce, mn = 0;

if (argc == 1 || argc > 2)
{
printf("Error\n");
return (1);
}
ce = atoi(argv[1]);

while (ce > 0)
{
if (ce >= 25)
ce -= 25;
else if (ce >= 10)
ce -= 10;
else if (ce >= 5)
ce -= 5;
else if (ce >= 2)
ce -= 2;
else if (ce >= 1)
ce -= 1;
mn += 1;
}
printf("%d\n", mn);
return (0);
}
