#include "main.h"
/**
 * more_numbers - entry point
 * Return: nothing
 */
void more_numbers(void)
{
int i;
int j;
for (j = 0; j <= 9 ; j++)
{
for (i = 0; i <= 14 ; i++)
{
	if ( i >= 10)
	{
	_putchar((ch / 10) + 48);
	}
_putchar((i % 10) + 48);
}
putchar('\n');
}
}
