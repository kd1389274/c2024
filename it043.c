#include<stdio.h>
main()
{
	char B, D, A[100];
	int C;

	C = 0;

	printf("文字列：");
	scanf("%c", &A[0]);

	//char A[]

	while (A[C] != '\0') {
		C++;
	}
	printf("文字数は%dです", C);
}