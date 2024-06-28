#include <stdio.h>
main()
{
	int A;

	printf("®”‚ð“ü—ÍF");
	scanf("%d", & A);

	if (A >= 10 && A <= 49) {
		switch (A / 10) {
		case 1:
			printf("‚P‚O“_‘ä‚Å‚·\n");
			break;
		case 2 :
			printf("‚Q‚O“_‘ä‚Å‚·\n");
			break;
		case 3:
			printf("‚R‚O“_‘ä‚Å‚·\n");
			break;
		case 4:
			printf("‚S‚O“_‘ä‚Å‚·\n");
		}
	}
	else{
		printf("ƒGƒ‰[F‚P‚O`‚S‚X‚Ì”ÍˆÍ‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");
	}
}