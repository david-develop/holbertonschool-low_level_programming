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
	int leng_1 = 0, leng_2 = 0, higher, carry = 0, add, add_1, add_2;

	for (leng_1 = 0; n1[leng_1] != '\0'; leng_1++)
		;
	for (leng_2 = 0; n2[leng_2] != '\0'; leng_2++)
		;
	if (leng_1 > leng_2)
		higher = leng_1;
	else
		higher = leng_2;
	if (size_r <= (higher + 1))
		return (0);
	r[higher + 1] = '\0';
	leng_1--, leng_2--, add_1 = n1[leng_1] - '0', add_2 = n2[leng_2] - '0';
	while (higher >= 0)
	{
		add = add_1 + add_2 + carry;
		if (add >= 10)
			carry = add / 10;
		else
			carry = 0;
		if (add > 0)
			r[higher] = (add % 10) + '0';
		else
			r[higher] = '0';
		if (leng_1 > 0)
			leng_1--, add_1 = n1[leng_1] - '0';
		else
			add_1 = 0;
		if (leng_2 > 0)
			leng_2--, add_2 = n2[leng_2] - '0';
		else
			add_2 = 0;
		higher--;
	}
	if (*(r) == '0')
		return (r + 1);
	else
		return (r);
}
