#include <stdio.h>

/* main - Prints numbers from 0 to 9.
 * Description: Prints all single digit numbers of base 10 starting from 0
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
printf("%d", i);
}

putchar('\n');

return (0);
}
