#include<stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	long int in, ln, iter;
        long int next;

	in = 1;
	ln = 2;
	printf("%ld, ", in);
	printf("%ld, ", ln);

	for (iter = 0; iter <= 47; iter++)
	{
		next = in + ln;
		printf("%ld", next);
		if (!(iter == 47))
		{
			printf("%s", ", ");
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
