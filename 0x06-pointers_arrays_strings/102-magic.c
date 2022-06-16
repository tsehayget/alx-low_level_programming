#include <stdio.h>
/**
 * main - check the code
 * Return: 0
 */
int main(void)
{
	int n;
	int a[5];
	int *p;
	/**
	 * You can only write one statement
	 * You are not allowed to use ,
	 * You are not allowed to modify p
	 */
	a[2] = 1024;
	p = &n;

	*(p + 5) = 98;
	printf("a[2] = %d\n", a[2]);

	return (0);
}
