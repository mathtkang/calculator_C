#include <stdio.h> //printf �Լ��� scanf_s �Լ��� ����ϱ� ���ؼ�

int main()
{
	//������ ���� ����
	char operatorType;
	//�ǿ����� ���� ����
	int num1, num2;

	printf("ù ��° �������� �Է� : ");
	//ù ��° �� �����ڸ� �Է� ����
	scanf_s("%d", &num1);
	//�����ڿ� �Բ� �Էµ� ����Ű ����
	rewind(stdin);

	printf("������ �Է� (+,-,*,/ ����) : ");
	//�����ڸ� �Է� �޴´�.
	scanf_s("%c", &operatorType, 1);
	//�����ڿ� �Բ� �Էµ� ����Ű ����
	rewind(stdin);

	printf("�� ��° �������� �Է� : ");
	//�� ��° �ǿ����ڸ� �Է� �޴´�.
	scanf_s("%d", &num2);

	// 1. switch �������� �ۼ�
	switch (operatorType)
	{
		case '+': //���� ����
			printf("%d + %d = %d \n", num1, num2, num1 + num2);
			break;
		case '-': //���� ����
			printf("%d - %d = %d \n", num1, num2, num1 - num2);
			break;
		case '*': //���� ����
			printf("%d * %d = %d \n", num1, num2, num1 * num2);
			break;
		case '/': //������ ����(�и� 0�� ��� �����߻�)
			if (num2 == 0) printf("���� �߻�. 0���� ���� �� �����ϴ�. \n");
			else printf("%d / %d = %.3f \n", num1, num2, num1 / (double)num2);
			break;
	}
	return 0;
}