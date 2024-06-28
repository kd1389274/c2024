#include <stdio.h>
#define SIZE 5 // 配列のサイズ
main()
{
	int d[SIZE] = { 30, 7,25,16,10 };
	int i, j, w;

	for (i = 0; i < SIZE; i++) {
		printf("%d ", d[i]);
	}
	printf("\n");

	for (i = 0; i < SIZE; i++) {
		for (j =i+1; j < SIZE; j++) {
			if (d[i] > d[j]) {
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	for (i = 0; i < SIZE; i++) {
		printf("%d ", d[i]);
	}
}
