#include <stdio.h>
struct profile{
	char neme[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile A[5];
	struct profile* p = A;

	int i;

	for (i = 0; i < 5; i++,p++) {
		printf("%d�l�ڂ̖��O�G",i+1);
		gets(p->neme);
		printf("���N�����G");
		scanf("%d%d%d", birth[0], birth[1], birth[2]);
		printf("���t�^�F");
		gats(p->blood);
	}
	for (i = 0; i < 5; i++) {
		if (p->blood = 'A') {
			printf("%s----%d�N%d��%d�����܂ꌌ�t�^---%s�^\n",)
		}
	}
}