#include <stdio.h>

struct profile {
	char neme[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile A;
	struct profile* p=&A;
	
	//p = &A;

	printf("���O�����");
	gets(p->neme);
	printf("���N�������󔒂ŋ�؂��ē���");
	scanf("%d%d%d",&p->birth[0],&p->birth[1],&p->birth[2]);
	printf("���t�^�����");
	scanf("%s",p->blood);
	printf(" % s�[�[ % d�N % d�� % d���[�[���t�^ % s\n",
		p->neme, p->birth[0], p->birth[1], p->birth[2], p->blood);
}