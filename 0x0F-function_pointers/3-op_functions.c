#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - function that add two integrers.
 * @a: first integrer.
 * @b: second integrer.
 * Return: result of adding both integrers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract.
 * @a: first integrer.
 * @b: second integrer.
 * Return: result of substraction.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply.
 * @a: first integrer.
 * @b: second integrer.
 * Return: result of multiplication.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divide two integrers.
 * @a: first integrer.
 * @b: second integrer.
 * Return: result of divition.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function that calcs the module.
 * @a: first integrer.
 * @b: second integrer.
 * Return: the module number.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
