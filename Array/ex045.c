#include <stdio.h>
main()
{
	int i, goukei;
	int a[][3] = { {10,20,30},{1,2,3} };

	for (goukei = 0, i = 0; i <= 2; i++) {
		printf("A[0][%d]=5d\n", i, a[0][i]);
		goukei += a[0][0];
	}
	printf("‚Os–Ú‚Ì‡Œv%d\n\n", goukei);
	for (goukei = 0, i = 0; i <= 2; i++) {
		printf("a[1][%d]=%d\n", i, a[1][i]);
		goukei += a[1][i];
	}
	printf("‚Ps–Ú‚Ì‡Œv%d\n\n,", goukei);
}