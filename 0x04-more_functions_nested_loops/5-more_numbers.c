#include "main.h"
/**
 * more_numbers - entry point
 */
void more_numbers(void)
{
int i;
int j;
for (j = 0; j <= 9 ; j++)
{
for (i = 0; i <= 14 ; i++)
{
_putchar(i + '0');
}
}
putchar('\n');
}
