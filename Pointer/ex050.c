#include <stdio.h>
main()
{
	int a;
	int* p_a;

	a = 100;
	p_a = &a;

	printf("A=%d\n", a);
	printf("a‚ÌƒAƒhƒŒƒX%p\n",&a);

	printf("*p_a=%d\n",*p_a);
	printf("p_a=%p\n", p_a);
}