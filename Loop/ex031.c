#include <stdio.h>
main()
{
	int A, B;

	B= 0;

	for (A = 1; A <= 10; A++) {
		B += A;
		printf("1����%d�܂ł̘a��%d\n", A, B);
	}
}