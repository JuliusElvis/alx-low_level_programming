#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
int a;
int b;

b = 0;
while (b < 10)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
b++;
_putchar('\n');
}
}
