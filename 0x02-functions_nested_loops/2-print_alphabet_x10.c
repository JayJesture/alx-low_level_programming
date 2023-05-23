#include <stdio.h>
/**
 * print_alphabet_x10 - print alpha *10
 * Return: 0 if successful
 */
void print_alphabet_x10(void)
{
int i = 0;
for (; i < 10; i++)
{
char ch = 'a';
for (; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
}  
return;
}
