#include<stdio.h>
main()
{
	int A;

	printf("演算子を入れて");
	scanf("%c", & A);

	switch (A) {
	    case'+':
			printf("加算です\n");
			break;
		case'+':
			printf("減算です\n");
			break;
		case'*':
			printf("乗算です\n");
			break;
		case'/':
			printf("除算です\n");
			break;
		case'%':
			printf("あまりです\n");
			break;
		default:
			printf("その他の文字です\n");
	}
}