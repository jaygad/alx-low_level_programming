#include <stdio.h>

/**
 * main - printsvall single digit numbers from 0
 * followed by a new line
 * Return: 0 if success
*/
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar (i);
	}
	putchar('\n');
	return (0);
}
