#include<stdio.h>
main()
{
	int A, B;

	printf("�������");
	scanf("%d", &A);

	B =0;

	while (B<=10){
		printf("%d+%d=%d\n", A, B, A + B);
		B++;
	}
}