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

	printf("名前を入力");
	gets(p->neme);
	printf("生年月日を空白で区切って入力");
	scanf("%d%d%d",&p->birth[0],&p->birth[1],&p->birth[2]);
	printf("血液型を入力");
	scanf("%s",p->blood);
	printf(" % sーー % d年 % d月 % d日ーー血液型 % s\n",
		p->neme, p->birth[0], p->birth[1], p->birth[2], p->blood);
}