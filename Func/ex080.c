#include<stdio.h>
#define TBL_END 5
int tbl_gokei4(int *p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);
}
int tbl_gokei4(int *p)
{
	int gokei = 0;

	while (*p!= TBL_END) {
		gokei += *p;
		p++;
	}
	return(gokei);
}