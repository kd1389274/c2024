#include<stdio.h>
main()
{
	int A;

	printf("数を入れて：");
	scanf("%d",&A);

	while (A > 0) {
		printf("＊");
		A--;
	}
}