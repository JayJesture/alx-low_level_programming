#include "main.h"
/**
 * times_table - run time-table of 9
 */
void times_table(void);
{
{
for (column = 0; column <= 8; column++)
{
int times = row * column;
if (((row)*(column+1)) < 10)
{
printf("%i,  ", times);
_putchar(times - '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(times - '0');
_putchar(',');
_putchar(' ');
}
}
_putchar((9 * row) - '0');
_putchar(\n);
}
}
