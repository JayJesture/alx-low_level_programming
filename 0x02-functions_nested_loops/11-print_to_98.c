#include "main.h"
/**
 * print_to_98 - print all to 98
 * @n: value
 */

void print_to_98(int n)
{
if (n > 98)
{
for (; n > 98; n--)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
} 
else if (n < 98)
{
for (; n < 98; n++)
{
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('9');
_putchar('8');
_putchar('\n');
}
