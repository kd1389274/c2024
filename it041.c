#include<stdio.h>
main()
{
	float box[3],B;
	int A;


	for (A = 0, B = 0; A < 3;) {
		printf("®”‚ð“ü—ÍF");
		scanf("%f",&box[A]);
		B += box[A];
		A++;
	}
	printf("‡Œv‚Í%.2f‚Å‚·B\n•½‹Ï‚Í%.2f‚Å‚·", B, B / 3);
}