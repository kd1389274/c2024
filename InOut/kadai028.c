#include <stdio.h>
main()
{
	int A;
	printf("整数？");
	scanf("%d", &A);

	printf("2倍すると%d\n３倍すると%d\n４倍すると%d\n", A * 2, A * 3, A * 4);
}