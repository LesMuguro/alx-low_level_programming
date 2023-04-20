#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - function that returns the sum of 2 numbers
 * @a: first number
 * @b: second number
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that returns the difference of 2 numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiplies 2 numbers
 * @a: furst number
 * @b: second number
 * Return: a multiplied by b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides 2 numbers
 * @a: first number
 * @b: second number
 * Return: a divided by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that gets the modulo of 2 numbers
 * @a: first number
 * @b: second number
 * Return: the modulus of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
