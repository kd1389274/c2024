#include <stdio.h>
main()
{
	int A;

	printf("��������́F");
	scanf("%d", & A);

	if (A >= 10 && A <= 49) {
		switch (A / 10) {
		case 1:
			printf("�P�O�_��ł�\n");
			break;
		case 2 :
			printf("�Q�O�_��ł�\n");
			break;
		case 3:
			printf("�R�O�_��ł�\n");
			break;
		case 4:
			printf("�S�O�_��ł�\n");
		}
	}
	else{
		printf("�G���[�F�P�O�`�S�X�͈̔͂���͂��Ă�������\n");
	}
}