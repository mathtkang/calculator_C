#include <stdio.h> //printf �Լ��� scanf_s �Լ��� ����ϱ� ���ؼ�

int main()
{
	//������ ���� ����
	char operatorType;
	//�ǿ����� ���� ����
	int num1, num2;

	printf("ù ��° �������� �Է� : ");
	scanf_s("%d", &num1);
	//�����ڿ� �Բ� �Էµ� ����Ű ����
	rewind(stdin);

	printf("������ �Է� (+,-,*,/ ����) : ");
	scanf_s("%c", &operatorType, 1);
	rewind(stdin);

	printf("�� ��° �������� �Է� : ");
	scanf_s("%d", &num2);
	rewind(stdin);

	// 2. if������ �ۼ�
	if (operatorType == '+') { //���� ����
		printf("%d + %d = %d \n", num1, num2, num1 + num2);
	}
	else if (operatorType == '-') { //���� ����
		printf("%d - %d = %d \n", num1, num2, num1 - num2);
	}
	else if (operatorType == '*') { //���� ����
		printf("%d * %d = %d \n", num1, num2, num1 * num2);
	}
	else if (operatorType == '/') { //������ ����(�и� 0�� ��� �����߻�)
		if (num2 == 0) printf("���� �߻�. 0���� ���� �� �����ϴ�. \n");
		else printf("%d / %d = %.3f \n", num1, num2, num1 / (double)num2);
	}
	return 0;
}