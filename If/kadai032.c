#include <stdio.h>
main()
{
	int A, B;
	printf("整数？");
	scanf("%d%d", &A, &B);

	if (A < B) {
		printf("大きい方は＝%d", B);
	}
	else {
		printf("大きい方は＝%d", A);
	}
}