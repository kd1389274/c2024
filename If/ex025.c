#include <stdio.h>
main()
{
	char a;

	printf("��������́F");
	scanf("%c\n",&a);
//�A���t�@�x�b�g
	if ((a >='a' && a<= 'z')||(a>'A'&&a<='Z')) {
		printf("�A���t�@�x�b�g");
	}
	else {
		if (a >='0' && a <='9') {
			printf("����");
		}
		else {
			printf("���̑��̕���");
		}
	}
}