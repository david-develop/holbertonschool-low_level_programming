#include<stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int in, ln, iter, itnum;
        unsigned long int next;

	in = 1;
	ln = 2;
	itnum = 95;
	printf("%ld,\n", in);
	printf("%ld,\n", ln);

	for (iter = 0; iter <= itnum; iter++)
	{
		next = in + ln;
		printf("%ld", next);
		if (!(iter == itnum))
		{
			printf("%s", ",\n");
		}
		else
		{
			printf("%s", "\n");
		}
		in = ln;
		ln = next;
	}
	return (0);
}
