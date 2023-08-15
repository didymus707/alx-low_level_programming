#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base64 in lowercase.
 * Return: 0
 */
int main(void)
{
	int num;
	char letters;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (letters = 'a'; letters < 'g'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');

	return (0);
}
