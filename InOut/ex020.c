#include <stdio.h>
main()
{
	char c;
	printf("小文字を入力；");
	scanf("%c",&c);
	printf("大文字に変換して%c\n",c-0x20);
}
