
#include<stdio.h>


//1. �ݺ� �Լ�
// �ݺ� �Լ��� �̿��ؼ� ���� �Ƕ�̵带 ���(�ݺ��Լ��� for���� while������ ������)
int f1(int a) {
	int i, j;
	for (i = 0; i < a; i++) // a�� �ݺ�
	{ 
		for (j = 0; j <= i; j++)
		{
			printf("%d ", j + 1);
		}
		printf("\n");
	}
}


//2. ��� �Լ�
// Ư�� ���ڿ��� ����Լ� �ݺ� ���
// ���� �Լ� �ȿ� ������ ���ԵǾ� ��� �ݺ�

void f2(int cnt) {
	if (cnt == 0){
		return 0;
	}
	else {
		printf("���ڿ��� ����մϴ�.\n");
		f2(cnt - 1);
	}
}

//3. ����Լ� Ȱ��(���� ����)
int nCr(int n, int r) {
	if (r == 0 || r == n) {
		return 1;
	}
	else {
		return nCr(n - 1, r-1) + nCr(n - 1, r);
	}
}

int main(void) {
	int a;
	printf("��� �ݺ��ұ��? : ");
	scanf_s("%d", &a);
	f1(a);

	int b;
	printf("\n");
	printf("���ڿ��� � ����ұ��? : ");
	scanf_s("%d", &b);
	f2(b);

	printf("���� �ٸ� n���� ����, ���� �������� �ʰ� r�� ���� : ");
	int n, r;
	scanf_s("%d %d", &n, &r);
	printf("%d", nCr(n, r));
	return 0;
}
