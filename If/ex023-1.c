#include <stdio.h>
main()
{
	int h, m, s;


	printf("�b�������:");
	scanf("%d", &s);

	if (s <= 5000) {
		h = s / 3600;
		s = s % 3600;
		m = s / 60;
		s = s % 60;
		printf("%d����%d��%d�b�ł�\n", h, m, s);
	}
	else {
		if (s < 0) {
			printf("�}�C�i�X�̓G���[�ł��B");
		}
		else {
			printf("�G���[�G���͂�5000�܂łɂ��Ă�������\n");
		}
	}
}