#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e')
			continue;
		if (ch == 'q')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
