#include<stdio.h>
#include<limits.h>
#define num 5
int main(void) {

	//1. �ִ밪, �ּҰ� ���ϱ�
	int i, max, min, index1, index2;
	int array[num];
	max = 0; //���� ���ڷ� �ʱ�ȭ
	min = INT_MAX; // �� 20�ﰳ�� ����, min�� ���� �� �ִ� �ִ� ũ��
	index1 = 0;
	index2 = 0;
	printf("5���� ���� �Է� : ");
	for (i = 0; i < num; i++)
	{
		scanf_s("%d", &array[i]);
		//�ִ밪 ���ϱ�
		if (max < array[i]){
			max = array[i];
			index1 = i; // index1�� �ִ밪�� ��� �ִ� �迭 ��ġ ����
		}
		//�ּҰ� ���ϱ�
		if (min > array[i]){
			min = array[i];
			index2 = i; // index2�� �ּҰ��� ��� �ִ� �迭 ��ġ ����
		}
	
	}
	printf("�ִ밪 : %d�Դϴ�. %d���� �ֽ��ϴ�.\n", max, index1 + 1);
	printf("�ּҰ� : %d�Դϴ�. %d���� �ֽ��ϴ�.\n", min, index2 + 1);

	// 2. 5���� ���� �� ¦�� �ִ밪, Ȧ�� �ִ밪 ���ϴ� ���α׷�
	int  array2[num];
	int j, oddMax, evenMax;
	oddMax = 0;
	evenMax = 0;

	printf("5���� ���� �Է� : ");
	for (j = 0; j < num; j++) {
		scanf_s("%d", &array2[j]);

		if (array2[j] % 2 == 0) {
			if (evenMax < array2[j]) {
				evenMax = array2[j];
			}
		}
		else {
			if (oddMax < array2[j]) {
				oddMax = array2[j];
			}
		}
	}
	printf("%d %d", evenMax, oddMax);
	return 0;
}