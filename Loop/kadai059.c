#include <stdio.h>
main()
{
	int A, B, C;

	printf("   1  2  3  4  5  6  7  8  9\n=========================\n");
	for (A = 1; A < 10; A++) {
		printf("\n%d|", A);
		for (B = 1; B < 10; B++) {
			printf(" %d", A * B);
		}
	}
}