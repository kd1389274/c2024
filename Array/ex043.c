#include <stdio.h>
main()
{
	char A, C[]="orange";
	int B;

	printf("文字列:orange\n");
	B = 0;
	A = 0;
	while (C[B] != '\0') {
		printf("%c", C[B]);
		A++;
		B++;
	}
	printf("文字数は%d文字\n", A);
}