#include <stdio.h>
/**
 * main - main block
 * Description: Print the aplhabets in lowercase with putcahr
 * Return: 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
