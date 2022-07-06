#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - returns the sum of a and b
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - returns the difference
 * @a: first integer
 * @b: second integer
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - divides a & b
 * @a: intrger
 * @b: integer
 * Return: result
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mul - multiply two numbers
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_mod - modulus
 * @a: integer
 * @b: integer
 * Return: result
 */
int op_mod(int a, int b)
{
	return (a % b);
}
