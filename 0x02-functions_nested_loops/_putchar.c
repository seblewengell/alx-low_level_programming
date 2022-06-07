#include <unistd.h>
/**
 * main - prints Putchar
 *
 * Description: prints _putchar
 *
 * Return: 0 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

