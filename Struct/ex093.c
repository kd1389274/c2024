#include <stdio.h>
struct syohin_data {
	char neme[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data A[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syohin_data* p = A;
	int i;
	for (i = 0; i < 3; i++, p++) {
		printf("���i���F%s\t", p->neme);
		printf("�P���F%d\t", p->tanka);
		printf("���F%d\t", p->kosuu);
		printf("���z�@��%d\n", p->tanka * p->kosuu);
	}
}