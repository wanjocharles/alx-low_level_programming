#include <stdio.h>
/**
 * main - A program that prints the size of various compute types
 * return 0 (success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
float e;
printf("Size of a char: %1u\n byte(s)", (unsigned long)sizeof(a));
printf("Size of an int : %1u\n byte(s)", (unsigned long)sizeof(b));
printf("Size of a long int: %1u\n byte(s)", (unsigned long)sizeof(c));
printf("Size of a long long int: %1u\n byte(s)", (unsigned long)sizeof(d));
printf("Size of a float: %1u\n byte(s)", (unsigned long)sizeof(e));
return (0);
}
