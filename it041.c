#include<stdio.h>
main()
{
	float box[3],B;
	int A;


	for (A = 0, B = 0; A < 3;) {
		printf("整数を入力：");
		scanf("%f",&box[A]);
		B += box[A];
		A++;
	}
	printf("合計は%.2fです。\n平均は%.2fです", B, B / 3);
}