#include <stdio.h> //printf �Լ��� ����ϱ� ���ؼ�

int main()
{
	//������ ���� ����
	char operatorType;
	//�ǿ����� ���� ����
	int num1, num2;

	printf("������ �Է��ϼ��� : ");
	//���� ������ �Է� �޴´�.
	scanf_s("%d %c %d", &num1, &operatorType, 1, &num2);

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