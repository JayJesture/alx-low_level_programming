#include <stdio.h>
/**
 * _islower - print whethre lower or not
 * @c: variable to determine if input is lowercase
 * Return: 0 if successful
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
return (0);
}
