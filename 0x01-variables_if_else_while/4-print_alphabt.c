#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || chh == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');

return (0);
}
