void print_alphabet(void);
#include <unistd.h>
int _putchar(char c)
{
{
     return (write(1, &c, 1));
	return (write(1, &c, 1));
}
