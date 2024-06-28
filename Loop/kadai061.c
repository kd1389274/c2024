#include <stdio.h>
main()
{
	int i;

	for (i = 1; i < 21; i++) {
		printf("  %d", i);
		if (i == 10) {
			printf("\n");
		}
	}
}