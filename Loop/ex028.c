#include<stdio.h>
main()
{
	int A, B;
	A = 0;
	printf("数を入れて");
	scanf("%d", &B);
	while (B!= 999) {
		A += B;
		printf("数を入れて");
		scanf("%d", &B);
	}
	printf("合計＝%d¥n", A);
}