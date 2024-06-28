#include <stdio.h>
int kazu(int a[]);
main()
{
	char A[500];
	int mozisuu;
	printf("•¶š—ñH");
	scanf("%s",&A[500]);
	mozisuu = kazu(A);

}
int kazu(int a[])
{
	int i, b;
	for (i = 0, b = 0; a[i] != '\0'; i++, b++);
	return(b);
}