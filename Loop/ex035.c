#include <stdio.h>
main()
{
	int A, B;

	A = 0;

	while (1) {
		printf("�������āF");
		scanf("%d", &B);

		if (B == -999) {
			break;
		}
		A += B;
	}
	printf("���v��%d\n",A);
}