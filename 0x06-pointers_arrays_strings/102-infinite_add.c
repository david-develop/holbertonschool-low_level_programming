#include "holberton.h"
#include <stdio.h>
/**
 * infinite_add - add two numbers
 * @n1: first number.
 * @n2: second number.
 * @r: buffer for resutl.
 * @size_r: buffer for operation.
 * Return: pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int leng_1, leng_2, higher, carry = 0, add;

	/*get the values lenght*/
	for (leng_1 = 0; n1[leng_1] != '\0'; leng_1++);

	for (leng_2 = 0; n2[leng_2] != '\0'; leng_2++);

	/*printf("leng_1: %d, leng_2: %d\n", leng_1, leng_2);*/
	/*determine which is the bigger number and store it in a variable*/
	if (leng_1 > leng_2)
		higher = leng_1;
	else
		higher = leng_2;

	/*if the size of the resultant is bigger than the buffer size_r*/
	/*return 0, else add a null point in the end of the resultant string*/
	if (size_r <= (higher + 1))
		return (0);
	else
		r[higher + 1] = '\n';

	while (higher >= 0)
	{
		if (leng_1 >= 0 && leng_2 >= 0)
			add = ((*(n1 + leng_1) - '0') + (*(n2 + leng_2) - '0') + carry);
		else if (leng_1 < 0 && leng_2 >= 0)
			add = ((*(n2 + leng_2) - '0') + carry);
		else if (leng_1 > 0 && leng_2 < 0)
			add = ((*(n1 + leng_1) - '0') + carry);
		*(r + higher) = (add % 10) + '0';
		carry = add / 10;
		leng_1--;
		leng_2--;
		higher--;
	}
	return (r);
}
