#include <stdio.h>

int power(int m, int n);

int power_00(int, int);

/* test power function */
main()
{
	int i;

	for(i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, power(2, i), power(-3, i));

	printf("\nvoila: %d", power_00(2,4));

	return 0;
}

/* power: raise base to n-th power; n >= 0 */
int power(int base, int n)
{
	int i, p;

	p = 1;
	for(i = 1; i <= n; ++i)
		p = p * base;
	return p;
}

/* power_00: raise base to n-th power; n >= 0; version 2 */
int power_00(int base, int n)
{
	int p;

	for(p = 1; n > 0; --n)
		p = p * base;
	return p;
}