#include <stdio.h>
main()
{
	int A;
	float box[3], B;

	for (A = 0, B = 0; A < 3; A++) {
		printf("実数を入力：");
		scanf("%f",&box[A]);

		B+=box[A];
	}
	printf("合計は%.2f\n平均は%2.f", B, B / 3);
}