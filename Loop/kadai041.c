#include <stdio.h>
main()
{
	int i,sam,a;
	i = 0;
	a = 0;
	sam = 0;

	while (a==-999) {
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d",&a);
		sam += a;
		i++;
	}
	printf("���v��%d\n���ρ�%d\n", sam,sam/i);

}