#include <stdio.h>
main()
{
	int ia, ib;
	printf("®”H");
	scanf("%d%d", &ia,&ib);
	printf("%d=%d\n%d-%d=%d\n%d*%d=%d\n%d/%d=%d‚ ‚Ü‚è%d\n",
		ia, ib, ia, ib, ia - ib, ia, ib, ia * ib, ia, ib, ia / ib, ia % ib);
}