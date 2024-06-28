#include <stdio.h>
main()
{
	int i,sam,a;
	i = 0;
	a = 0;
	sam = 0;

	while (a==-999) {
		printf("整数（－９９９で終了）？");
		scanf("%d",&a);
		sam += a;
		i++;
	}
	printf("合計＝%d\n平均＝%d\n", sam,sam/i);

}