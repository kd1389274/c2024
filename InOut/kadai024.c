#include <stdio.h>
main()
{
	int ia, ib;
	printf("整数？");
	scanf("%d%d", &ia,&ib);
	printf("%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%dあまり%d\n",
		ia, ib, ia, ib, ia - ib, ia, ib, ia * ib, ia, ib, ia / ib, ia % ib);
}