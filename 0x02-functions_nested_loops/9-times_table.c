#include "main.h"
/**
 * times_table - run time-table of 9
 */
void times_table(void)
{
int row, column = 0;
for (row; row <= 9; row++)
{
for (column = 0; column <= 8; column++)
{
char times1 = (char)((row * column)/10);
char times2 = (char)((row * column)%10);
if (((row)*(column+1)) < 10)
{
_putchar(times1);
_putchar(times2);
_putchar(',');
_putchar(' ');
_putchar(' ');
}
else
{
_putchar(times1 - '0');
_putchar(times2 - '0');
_putchar(',');
_putchar(' ');
}
}
_putchar((9 * row) - '0');
_putchar('\n');
}
return;
}
