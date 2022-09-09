#include <stdio.h>
/**
 * main- entry point
 * char c
 *
 * program to print
 * section header
 * Return: always 0
 */
int main(void)
{
char c;

for (c = 'z'; c >= 'a'; --c)
{
putchar(c);
}
putchar('\n');
return (0);
}
