#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a - z
 */
void print_alphabet_x10(void)
{
int i, cpt;
cpt = 0;
while (cpt < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
cpt++;
_putchar('\n');
}
}
