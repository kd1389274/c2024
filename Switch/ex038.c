#include <stdio.h>
main()
{
	int A;

	printf("整数を入力：");
	scanf("%d", & A);

	if (A >= 10 && A <= 49) {
		switch (A / 10) {
		case 1:
			printf("１０点台です\n");
			break;
		case 2 :
			printf("２０点台です\n");
			break;
		case 3:
			printf("３０点台です\n");
			break;
		case 4:
			printf("４０点台です\n");
		}
	}
	else{
		printf("エラー：１０〜４９の範囲を入力してください\n");
	}
}