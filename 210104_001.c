/* C��� �⺻ �����

 1. 0�� �ƴ� ��� ���� ��(0��1��)
 2. ��� ���ǹ�, �ݺ������� �ظ��ؼ� ������ ��ȣ ����
 3. for��, while���� �󸶵��� ��ø ����
 4. for(;;) while(1)�� �����ϰ� ���� ������� �ǹ̷� ����
 5. break;�� �̿��� �ݺ��� ��� �������� �� ����

*/


#include<stdio.h>

int main(void) {
	int choice;
	char button;
	printf("******************************************\n");
	printf("1. ���� ���α׷�\n");
	printf("2. ���ϴ� ������ ���� ���� ���α׷�\n");
	printf("3. ���ϴ� ������ ��� ���α׷�\n");
	printf("******************************************\n");

	while (1){
	printf("�� ���ϴ� ���α׷��� �����ϼ���(1,2,3) : ");
	scanf_s("%d", &choice);

	if (choice == 1){
		char o;
		int x, y;
		printf("***1. ���� ���α׷�***\n");
		while (1) // 1 = ����, break�� �̿����� ������ ���ѷ�����
		{
			printf("������ �Է��ϼ��� : ");
			scanf_s("%d %c %d", &x, &o, 1, &y); // scanf_s�� scanf�� �޸� ���ڳ� ���ڿ��� ��� ���̸� �־�� ��

			if (o == '+') {
				printf("%d %c %d = %d\n", x, o, y, x + y);
			}

			else if (o == '-') {
				printf("%d %c %d = %d\n", x, o, y, x - y);
			}
			else if (o == '*') {
				printf("%d %c %d = %d\n", x, o, y, x * y);
			}
			else if (o == '/') {
				printf("%d %c %d = %d\n", x, o, y, x / y);
			}
			else if (o == '%') {
				printf("%d %c %d = %d\n", x, o, y, x % y);
			}
			else {
				printf("�Է��� �߸��Ǿ����ϴ�.\n");
			}
			getchar(); // scanf_s ���߻��� ���۸� �����ִ� getchar(); Ȱ��

			printf("���� ���α׷��� �����Ͻðڽ��ϱ�?(y/n) : ");

			scanf_s("%c", &o,1);

			if (o == 'n' || o == 'N') {
				continue;
			}
			else if (o == 'y' || o == 'Y') {
				break;
			}
			else {
				printf("�Է��� �߸��Ǿ����ϴ�.\n");
			}
		}
	}

	else if(choice == 2){
		printf("***2.���ϴ� ������ ���� ���� ���α׷�***\n");
		int num, a, i, sum = 0;
		a = 0;
		printf("������ ������ �Է��ϼ��� : ");
		scanf_s("%d", &num);
		for (i = 0; i < num; i++) {
			printf("������ ���� �Է��ϼ��� : ");
			scanf_s("%d", &a);
			sum += a;
		}
		printf("���� %d�� �Է¿Ϸ�\n", a);
		printf("��ü ������ ���� %d�Դϴ�\n", sum);

		getchar();  // scanf_s ���߻��� ���۸� �����ִ� getchar(); Ȱ��
		printf("�� ���α׷��� �����Ͻðڽ��ϱ�?(y/n) : ");
		scanf_s("%c", &button, 1);
		if (button == 'n' || button == 'N') {
			continue;
		}
		else if (button == 'y' || button == 'Y') {
			break;
		}
		else {
			printf("�Է��� �߸��Ǿ����ϴ�.\n");
		}

	}
	else if (choice == 3) {
		printf("***3.���ϴ� ������ ��� ���α׷�***\n");

		int n, m;
		printf("���� �Է��ϼ��� : ");
		scanf_s("%d", &n);

		for (m = 1; m <= 9; m++) {
			printf("%d * %d = %d\n", n, m, n * m);
		}
	}

	else if(choice > 0 || choice < 4) {
		printf("�Է��� �߸��Ǿ����ϴ�. ���α׷��� �ٽ� �����մϴ�.\n");
		continue;
	}
		getchar(); // scanf_s ���߻��� ���۸� �����ִ� getchar(); Ȱ��
		printf("�� ���α׷��� �����Ͻðڽ��ϱ�?(y/n) : ");
		scanf_s("%c", &button, 1);
		if (button == 'n' || button == 'N') {
			continue;
		}
		else if (button == 'y' || button == 'Y') {
			break;
		}
		else {
			printf("�Է��� �߸��Ǿ����ϴ�.\n");
		}
	}
	return 0;
}
