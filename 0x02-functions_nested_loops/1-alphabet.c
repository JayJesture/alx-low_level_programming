#include <stdio.h>
/**
 * main - print alpha
 * Return: 0 if successful
 */
void print_alphabet(void);
{
char ch = 'a';
for (; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
