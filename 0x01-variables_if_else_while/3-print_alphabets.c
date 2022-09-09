#include <stdio.h>
#include <ctype.h>
/**
   * main - print alphabet in lowercase
   *
   *Return: zero
   */
int main(void)
{
	char ch = 'a';
	char ch_up = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch_up = 'A'; ch_up <= 'Z'; ch_up++)
		putchar(ch_up);
	putchar('\n');
	return (0);
}
