#include <stdio.h>
void Mozi(char* s1, char* s2);
main()
{
	char a[256], b[256];

	printf("�z��a:");
	gets(a);
	printf("�z��b;");
	gets(b);
	Mozi(a, b);
	printf("�z��a:%s\n", a);
}
void Mozi(char* s1, char* s2)
{
	int W, X;
	for (W = 0; *(s1 + W) != '\0'; W++);
	for (X = 0; *(s1 + W) = *(s2 + X); W++, X++);
}