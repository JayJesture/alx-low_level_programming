#include <stdio.h>
/**
 * print_alphabet - print alpha
 * Return: 0 if successful
 */
void print_alphabet(void)
{
char ch = 'a';
for (; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return;
}
