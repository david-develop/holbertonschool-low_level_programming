#include<stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 *
 * Return: Always 0.
 */

int main(void)
{
	long int in, ln, iter, itnum, next, ini, lni, inl, lnl, nexti, nextl;
	long int itnuml = 8, tendig = 1000000000, carry;

	in = 1;
	ln = 2;
	itnum = 86;
	printf("%ld, ", in);
	printf("%ld, ", ln);

	for (iter = 0; iter <= itnum; iter++)
	{ next = in + ln;
		printf("%ld, ", next);
		in = ln;
		ln = next;
	}
	for (iter = 0; iter <= itnuml; iter++)
	{
		if (iter == 0)
		{ ini = in % tendig;
			lni = ln % tendig;
			inl = in / tendig;
			lnl = ln / tendig;
		}
		else
		{ ini = lni;
			inl = lnl;
			lni = nexti;
			lnl = nextl;
		}
		carry = (ini + lni) / tendig;
		nexti = (ini + lni) % tendig;
		nextl = inl + lnl + carry;
		printf("%ld%ld", nextl, nexti);
		if (!(iter == itnuml))
			printf("%s", ", ");
		else
			printf("%s", "\n");
	}
	return (0);
}
