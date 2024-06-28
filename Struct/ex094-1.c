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
		printf("%dl–Ú‚Ì–¼‘OG", i + 1);
		scanf("%s",&p->neme);
		printf("¶”NŒŽ“ú");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("ŒŒ‰tŒ^F");
		scanf("%s",&p->blood);
	};
	for (i = 0,p=A; i < 5; i++, p++) {
		if (p->birth[1] == 2) {
			printf("%s=====%d”N%dŒŽ%d“ú===ŒŒ‰t%sŒ^\n",
				p->neme, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
	}

}