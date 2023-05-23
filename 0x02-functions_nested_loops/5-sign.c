#include <stdio.h>
/**
 * print_sign - print sign
 * @n: var carries value to be checked
 * Return: 1 if +
 */
int print_sign(int n)
{
int i;
if (n > 0)
{
putchar('+');
i = 1;
}
else if (n < 0)
{
putchar('-');
i = -1;
}
else
{
putchar('0');
i = 0;
}
return (i);
}

