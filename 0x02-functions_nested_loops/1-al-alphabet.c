#include "main.h"
/**
 * main - Entry block
 * @void: no argument
 * Return: 0
 */
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
