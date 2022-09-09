#include <stdio.h>
/* Entry point of the program */

int main(void)
{
char c = '0';
char d = 'a';

for (c; c <= '9'; ++c)
{
putchar(c);
}
for (d; d <= 'f'; d++)
{
putchar(d);
}
putchar('\n');
return (0);
}
