#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * int n - random number
 *
 * program to check
 * section header
 * Return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int a = n % 10;
if (a > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, a);
}
else if (a == 0)
{
printf("Last digit of %d is %d and is 0", n, a);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
}
return (0);
}
