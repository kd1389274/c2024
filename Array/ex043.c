#include <stdio.h>
main()
{
	char A, C[]="orange";
	int B;

	printf("•¶š—ñ:orange\n");
	B = 0;
	A = 0;
	while (C[B] != '\0') {
		printf("%c", C[B]);
		A++;
		B++;
	}
	printf("•¶š”‚Í%d•¶š\n", A);
}