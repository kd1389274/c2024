#include <stdio.h>
main()
{
	char str[256];

	printf("文字入力せい");

	while (gets(str) != NULL) {
		puts(str);
	}
}