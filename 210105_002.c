#include <stdio.h>

int main(void) {

	//2���� �迭 �̿��� ������ ���
	int i, j;
	int gugu[9][9]; // �������Ҵ� ����ȭ

	for (i = 1; i <=8; i++) { // gugu[i][0]�� 1~8
		printf("[%d��]\n", i+1); // printf�� 2~9������ ���
		for (j = 0; j <= 8; j++) { 
			gugu[i][j] = (i+1) * (j+1);
			printf("%d * %d = %d\n", i+1, j+1, gugu[i][j]);
		}
		printf("----------\n");
	}


	//�л����� ���� ���ϴ� ���α׷�

	int score[5][2]; // 5 = �л���, 2 = ����, ���� ����
	int total[2] = { 0, }; // ���� ���� ������ ���� �հ� �迭
	int k;

	for (k = 0; k < 5; k++) {
		printf("%d�� �л��� ����, ���� ���� : ", k +1);
		scanf_s("%d %d", &score[k][0], &score[k][1]);
	}

	for (k = 0; k < 5; k++) {
		total[0] += score[k][0]; // �л� 5���� ���� ���� �հ�
		total[1] += score[k][1]; // �л� 5���� ���� ���� �հ�
	}
	printf("\n\n");
	printf("���� ���� ���� : %d\n", total[0]);
	printf("���� ���� ���� : %d\n", total[1]);
	return 0;
}