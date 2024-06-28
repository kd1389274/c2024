#include<stdio.h>
main()
{
	int a,b,c;
	int* p_a,*p_b;

	a = 50;
	b = 10;

	p_a = &a;
	p_b = &b;

	printf("50+10=%d\n", *p_a + *p_b);
}