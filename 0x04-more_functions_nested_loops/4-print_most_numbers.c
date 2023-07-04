#include "main.h"
/**
 * print_most_numbers - Print the numbers since 0 up to 9
 * Description: Prints the numbers excluding 2 and 4
 * Return: The numbers since 0 up to 9
 */
void print_most_numbers(void)
{
int X = 0;
for (; X <= 9; X++)
{
if (X == 2 || X == 4)
{
continue;
}
else
{
_putchar(X + '0');
}
}
_putchar('\n');
}
