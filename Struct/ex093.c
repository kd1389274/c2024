#include <stdio.h>
struct syohin_data {
	char neme[20];
	int tanka;
	int kosuu;
};
main()
{
	struct syohin_data A[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syohin_data* p = A;
	int i;
	for (i = 0; i < 3; i++, p++) {
		printf("商品名：%s\t", p->neme);
		printf("単価：%d\t", p->tanka);
		printf("個数：%d\t", p->kosuu);
		printf("金額　￥%d\n", p->tanka * p->kosuu);
	}
}