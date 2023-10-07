#include<stdio.h>

/**
 * main - This is the main function
 *
 * Return: Always 0
*/
int main(void)
char ch = 'z'; /* Start with 'z', the last lowercase alphabet */    
while (ch >= 'a') /* Loop from 'z' down to 'a' */
putchar(ch); /* Print the current character */
ch--;        /* Move to the previous character in reverse order */    
putchar('\n'); /* Print a newline character at the end */
return (0);
}
