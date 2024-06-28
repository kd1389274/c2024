#include<stdio.h>
main()
{
	int a[5],A;

	a[0] = 10;
	a[1] = 20;
	a[2] = 30;
	a[3] = 40;
	a[4] = 50;

	A = 0;

	for (a[A]; A < 5;) {
		printf("a[%d]=%d\n", A, a[A]);
		A++;
	}
}