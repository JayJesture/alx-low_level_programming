#include "main.h"
/**
 * times_table - run time-table of 9
 */
void times_table(void)
{
int row, column;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 8; column++)
{
int times1 = ((row * column)/10);
int times2 = ((row * column)%10);
if (((row)*(column+1)) < 10)
{
_putchar(times1 + '0');
_putchar(times2 + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(times1 + '0');
_putchar(times2 + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar((9 * row) + '0');
_putchar('\n');
}
return;
}
