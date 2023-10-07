#include<stdio.h>
/*
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet in reverse,
 *              from 'z' to 'a', followed by a newline character.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'z';
while (ch >= 'a')
{
putchar (ch);
ch--;
}
putchar('\n');
return (0);
}
