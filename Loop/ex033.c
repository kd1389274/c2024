#include <stdio.h>
main()
{
	int A, B, C;

	printf("”‚ÍH");
	scanf("%d", &B);

	for (A = 0, C = 0; B != -999; C++) {
		A += B;
		printf("”‚ÍH");
		scanf("%d", &B);
	}
	printf("‡Œv%d\t•½‹Ï%d\n", A, A / C);
}