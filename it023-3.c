#include <stdio.h>
main()
{
	int A, B, a;

	printf("‰‰Zq‚ğ“ü—Í;");
	scanf("%d", & a);

	printf("‚Q‚Â‚Ì®”‚ğ“ü—ÍF");
	scanf("%d%d", &A, &B);

	if (a == 1) {
		printf("%d\n",A + B);
	}
	else {
		if (a == 2) {
			printf("%d\n",A - B);
		}
		else {
			if (a == 3) {
				printf("%d\n", A * B);
			}
			else{
				if (a == 4) {
					printf("%d\n", A / B);
				}
			}
		}
	}
}