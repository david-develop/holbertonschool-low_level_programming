#include<stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	long int in, ln, iter, itnum, sum;
	long int next;

	itnum = 29;
	in = 1;
	ln = 2;
	sum = 0;

	for (iter = 0; iter <= itnum; iter++)
	{
		next = in + ln;
		in = ln;
		ln = next;
		if (next % 2 == 0)
		{
			sum = sum + next;
		}
	}
	sum = sum + 2;
	printf("%ld\n", sum);
	return (0);
}
