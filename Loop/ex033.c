#include <stdio.h>
main()
{
	int A, B, C;

	printf("���́H");
	scanf("%d", &B);

	for (A = 0, C = 0; B != -999; C++) {
		A += B;
		printf("���́H");
		scanf("%d", &B);
	}
	printf("���v��%d\t���ρ�%d\n", A, A / C);
}