#include <stdio.h>
/**
 * print_sign - print sign
 * @n: var carries value to be checked
 * Return: 1 if +
 */
int print_sign(int n)
{
if (n < 0)
{
putchar('-');
return (0);
}
else if (n == 0)
{
putchar('0');
return (0);
}
putchar('+');
return (1);
}

