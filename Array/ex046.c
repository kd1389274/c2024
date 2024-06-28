#include<stdio.h>
main()
{
	int A, B, C;
	int a[][3] = { {10,20,30} ,{ 10,20,30 } };

	for (A = 0; A <= 1; A++) {
		for (B = 0, C = 0; B <= 2; B++) {
			printf("a[%d][%d]=%d\n", A, B, a[A][B]);
			C+= a[A][B];
		}
		printf("%ds–Ú‚Ì‡Œv%d\n\n", A, C);
	}
}