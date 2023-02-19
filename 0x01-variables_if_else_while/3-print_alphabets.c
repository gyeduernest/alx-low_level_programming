#include <stdio.h>

/*
 * The code alphabet in lowercase,
 * and then in uppercase will go here
 * */

int main(void)
{
	int ch;

	for (ch = 'a'; ch<= 'z', ch++;)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z',ch++;)
		putchar(ch);
	putchar('\n');
	return (0);
}

