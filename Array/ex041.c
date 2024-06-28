#include <stdio.h>
main()
{
	int A;
	float box[3], B;

	for (A = 0, B = 0; A < 3; A++) {
		printf("ŽÀ”‚ð“ü—ÍF");
		scanf("%f",&box[A]);

		B+=box[A];
	}
	printf("‡Œv‚Í%.2f\n•½‹Ï‚Í%2.f", B, B / 3);
}