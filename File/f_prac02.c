#include <stdio.h>
main()
{
	int max_score,score = 0;
	char max_name[20],ch, name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r")) {
		fp = fopen("score.txt", "r");
		fscanf(fp, "%s%d", max_name, &max_score);
		fclose(fp);
		printf("�ō����_�@���O�F%s �n�C�X�R�A�F%d\n",
			max_name, max_score);
	}
	else {
		printf("�t�@�C�����ǂݎ��܂���I\n");
		return;
	}
	printf("�v���C���[������́F");
	name = 0;
	scanf("%s", &name);
	if (name == 0) {
		printf("���O�����͂���Ă��܂���I");
		return;
	}
	while (1) {
		printf("���݂̃X�R�A�F%d(e�ŏI��)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;

	}
	if (max_score < score) {
		if (fp = fopen("score.txt", "w")) {
			fp = fopen("score.txt", "w");
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("�n�C�X�R�A�X�V�I�I\n");
		}
		else {
			printf("�t�@�C���ɏ������߂܂���I\n");
		    return;
		}
	}
	fp = fopen("score.txt", "r");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose;
	printf("�ō��_�F%d   ���O�F%s�Ńt�@�C���ɕۑ����܂����I�I\n", score, name);
}