#include <stdio.h>
main()
{
	int y;

	printf("西暦を表示;");
	scanf("%d", &y);
	if (y >= 1989) {
		printf("平成生まれです\n");
	}
	else {
		printf("平成より前に生まれてます\n");
	}
}