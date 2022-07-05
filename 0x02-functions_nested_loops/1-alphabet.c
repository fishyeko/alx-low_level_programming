#include <stdio.h>
#include "main.h"
/*
<<<<<<< HEAD
 * print_alphabet -> Print alphabet in lowercase using only `_putchar`
=======
 * print_alphabet -> Print_alphabet in lowercase using only `_putchar`
>>>>>>> 0acbee37bba5297860b49fcd5c3b4ab87c8bb4f2
 * 
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
