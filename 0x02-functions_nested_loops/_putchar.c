#include <unistd.h>
/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

