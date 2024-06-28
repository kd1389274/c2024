#include <stdio.h>
main()
{
	int i, sum, b;
	i = 0;
	b = 0;

	while (i ==-999) {
		i = 0;
		printf("整数（-999で終了）？");
		scanf("%d", &i);
		sum += i;
		b++;
	}
	printf("合計＝%d\n平均＝%d\n", sum,sum/b);
}