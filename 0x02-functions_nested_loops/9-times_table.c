#include "main.h"
/**
 * times_table - run time-table of 9
 */
void times_table(void)
{
int row, column, lst;

for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 8; column++)
{
if (((row)*(column+1)) < 10)
{
int times1 = ((row * column)/10);
int times2 = ((row * column)%10);
if (times1 > 0)
_putchar(times1 + '0');
_putchar(times2 + '0');
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
if (times1 > 0)
_putchar(times1 + '0');
_putchar(times2 + '0');
_putchar(',');
_putchar(' ');
}
}
lst = 9 * row;
_putchar(lst + '0');
_putchar('\n');
}
return;
}
