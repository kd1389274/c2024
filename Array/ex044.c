#include<stdio.h>
main()
{
	char moji1[80], moji2[80];

	printf("文字列１を入力：");
	scanf("%s", &moji1[0]);

	printf("文字列２を入力：");
	scanf("%s", &moji2[0]);

	printf("moji1=%c\tmoji2=%c\n", moji1[0], moji2[0]);
}