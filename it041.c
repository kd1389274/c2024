#include<stdio.h>
main()
{
	float box[3],B;
	int A;


	for (A = 0, B = 0; A < 3;) {
		printf("��������́F");
		scanf("%f",&box[A]);
		B += box[A];
		A++;
	}
	printf("���v��%.2f�ł��B\n���ς�%.2f�ł�", B, B / 3);
}