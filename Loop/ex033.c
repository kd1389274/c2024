#include <stdio.h>
main()
{
	int A, B, C;

	printf("数は？");
	scanf("%d", &B);

	for (A = 0, C = 0; B != -999; C++) {
		A += B;
		printf("数は？");
		scanf("%d", &B);
	}
	printf("合計＝%d\t平均＝%d\n", A, A / C);
}