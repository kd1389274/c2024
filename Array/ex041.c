#include <stdio.h>
main()
{
	int A;
	float box[3], B;

	for (A = 0, B = 0; A < 3; A++) {
		printf("��������́F");
		scanf("%f",&box[A]);

		B+=box[A];
	}
	printf("���v��%.2f\n���ς�%2.f", B, B / 3);
}