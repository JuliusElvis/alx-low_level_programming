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
char d;
for (c = 'a'; c <= 'z'; ++c)
{
putchar(c)
}
for (d = 'A'; d <= 'Z'; ++d)
{
putchar(d)
}
putchar('\n');
return (0);
}
