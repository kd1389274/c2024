#include <stdio.h>
struct profile {
	char neme[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile A[5];
	struct profile* p = A;

	int i;

	for (i = 0; i < 5; i++, p++) {
		printf("%d�l�ڂ̖��O�G", i + 1);
		scanf("%s",&p->neme);
		printf("���N����");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^�F");
		scanf("%s",&p->blood);
	};
	for (i = 0,p=A; i < 5; i++, p++) {
		if (p->birth[1] == 2) {
			printf("%s=====%d�N%d��%d��===���t%s�^\n",
				p->neme, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}

}