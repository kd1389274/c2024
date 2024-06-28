#include <stdio.h>

int tbl_gokei1(int* p);
int tbl_gokei2(int tbl[])

main()
{
	int a[] = { 10,20,30,40,-999 }, gokei;

	gokei = tbl_gokei1(a);
	printf("gokei=%d\n", gokei);

	gokei = tbl_gokei2(a);
	printf("gokei=%d\n", gokei);
}
int tbl_gokei1(int* p)
{
	int gokei = 0;

	while (*p != -999) {
		gokei += *p;
		p++;
	}
	return(gokei);
}
int tbl_gokei2(int tbl[])
{
	
}