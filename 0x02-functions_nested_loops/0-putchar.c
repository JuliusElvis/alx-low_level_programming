#include "main.h"
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: void
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
