#include <stdio.h>
main()
{
	int A, B;

	A = 0;

	while (1) {
		printf("数を入れて：");
		scanf("%d", &B);

		if (B == -999) {
			break;
		}
		A += B;
	}
	printf("合計＝%d\n",A);
}