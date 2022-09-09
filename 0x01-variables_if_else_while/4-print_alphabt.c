#include <stdio.h>
/**
 * main - entry point
 * char c
 *
 * program to print
 * section header
 * Return: always 0
 */
int main(void)
{
char c;

for (c = 'a'; c <= 'z'; ++c)
{
	if (c == 'q' || c == 'e')
	{}
	else
	{
		putchar(c);
	}
}
putchar('\n');
return (0);
}
