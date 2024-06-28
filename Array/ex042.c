#include<stdio.h>
main()
{
	int A;
	char d[] = "Apple";

	A = 0;

	while(d[A]!='\0'){
		printf("%c", d[A]);
		A++;
	}
}