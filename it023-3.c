#include <stdio.h>
main()
{
	int A, B, a;

	printf("演算子を入力;");
	scanf("%d", & a);

	printf("２つの整数を入力：");
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