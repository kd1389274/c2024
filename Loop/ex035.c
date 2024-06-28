#include <stdio.h>
main()
{
	int A, B;

	A = 0;

	while (1) {
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &B);

		if (B == -999) {
			break;
		}
		A += B;
	}
	printf("‡Œv%d\n",A);
}