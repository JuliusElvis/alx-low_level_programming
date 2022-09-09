#include <stdio.h>
/* Entry point of the program */
/**
 * main - entry point
 * char c and d
 *
 * program to print
 * section header
 * Return: always 0
 */
int main(void)
{
char c;
char d;

for (c = '0'; c <= '9'; ++c)
{
putchar(c);
}
for (d = 'a'; d <= 'f'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
