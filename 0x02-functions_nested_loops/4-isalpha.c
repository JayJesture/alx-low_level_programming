#include <stdio.h>
/**
 * _isalpha - print whethre alpha or not
 * @c: variable to determine if input is alpha
 * Return: 0 if successful
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
return (0);
}
