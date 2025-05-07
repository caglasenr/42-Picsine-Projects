/*Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.

Example:

$> ./maff_alpha | cat -e
aBcDeFgHiJkLmNoPqRsTuVwXyZ$*/
#include <unistd.h>

int	main(void)
{
	char c = 'a';
	int i = 1;

	while (c <= 'z')
	{
		if (i % 2 == 0)
			c -= 32;
		write(1, &c, 1);
		if (i % 2 == 0)
			c += 32;
		c++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}