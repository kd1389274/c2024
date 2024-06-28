#include <stdio.h>
#include <stdlib.h>
#include<time.h>

main()
{
	int K;

	srand(time(0));
	K = rand() % 100 + 1;

	if (K <= 30) {
		printf("‰ïS‚ÌˆêŒ‚");
	}
	if(K>30){
		printf("’ÊíUŒ‚");
	}
}