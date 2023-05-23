#include <stdio.h>
/**
 * main - print alpha
 * Return: 0 if successful
 */
int main(void)
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
  
  return (0);
}
