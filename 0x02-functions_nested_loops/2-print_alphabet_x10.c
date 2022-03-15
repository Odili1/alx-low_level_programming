#include "main.h"
/**
 *print_alphabet_x10 - repeats the print_alphabet 10 times.
 *
 *Retrun: Nothing.
 */
void print_alphabet_x10(void)
{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = Ã'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
