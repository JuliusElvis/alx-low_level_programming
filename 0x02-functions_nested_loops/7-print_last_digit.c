#include "main.h"
/**
 * print_last_digit - entry point
 *
 * @n: int
 * Return: always 0
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
{
a = (-1 * (n % 10));
_putchar (a + '0');
return (a);
}
else
{
a = (n % 10);
_putchar (a + '0');
return (a);
}
}
