#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers.
 * Numbers must be separated by ,, followed by a space.
 * Numbers should be printed in ascending order
 * You can only use `putchar` up to four times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
