#include <stdio.h>
main()
{
	int A, B;

	printf("数を入れて：");
	scanf("%d",&A);

	for (B = 1; B <= 5; B++) {
		printf("%d\n", A * B);
	}
}