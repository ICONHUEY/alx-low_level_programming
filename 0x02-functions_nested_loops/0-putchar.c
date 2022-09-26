#include "main.h"
/**
 * main - Prints the string "_putchar" from a character array.
 * return: 0 on success.
 */
int main(void)
{
	cher c{} = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n')
	return (0);
}
