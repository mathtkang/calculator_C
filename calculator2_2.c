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