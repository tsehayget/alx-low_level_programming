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

	a[2] = 1024;
	p = &n;
	/**
	 * Remember:
	 * - you are not allowed to use a
	 * - you are not allowed to modify p
	 */
	*(p + 5) = 98;

	printf("a[2] = %d\n", a[2]);
	return (0);
}
