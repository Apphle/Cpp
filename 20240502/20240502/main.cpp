#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5] = { 0 };
	int choise = 0;
	int num = 0;
	int i = 0, j = 0;

	while (choise != 3)
	{
		printf("�����͸� �Է��ҽ� 1, �����͸� �����ҽ� 2, ���Ḧ ���ҽ� 3�� �Է����ּ��� : ");//push or pop ����
		scanf("%d", &choise);

		switch (choise)//switch�� ����� push, pop���� ����
		{
			case 1:
				printf("push�� ���� �Է��ϼ��� :\n");
				scanf("%d", &num);
				arr[i] = num;//�迭�� �� �ֱ�
				for (j = 0; j < 5; j++)//�ϳ� ���������� ���
				{
					printf("[ %d ]\n", arr[j]);
				}
				i++;//���� �־����Ƿ� 1����
				break;
			case 2:
				if (i == 0)//�迭�� 0��° ĭ�� ���� ������ pop�� �õ��ҽ� ���Ѵٰ� �ȳ�
				{
					printf("ó���� pop�� �� �����ϴ�.\n");
				}
				arr[i - 1] = 0;//���� push�� ������� ������ i�� ++�� ���־��� ������ ���� i���� 1 ���� ���� 0���� �ʱ�ȭ
				for (j = 0; j < 5; j++)//�ϳ� ���������� ���
				{
					printf("[ %d ]\n", arr[j]);
				}
				i -= 1;//�ϳ��� �����Ƿ� i�ϳ� ���̱�
				break;	

		}
		if (i == 5)//�迭�� �� ã�����
		{
			printf("�� á���ϴ�!\n");
		}
		else if (i < 0)//������ pop�ϴ°�� i�� -�� ���°�� ����
		{
			i = 0;
		}
		else if (i > 5)//������ push�ϴ°�� i�� 5�̻����� ���°�� ����
		{
			i = 5;
		}
		
	}
	return 0;
}