#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    double arr[10][5] = { 0 };
    double score[3] = { 0 };
    int i, j, k;
    double average = 0;
    double min[3] = { 0 };

    for (i = 0; i < 10; i++)
    {
        printf("����, ����, ���� ������ �Է��ϼ��� : ");
        scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
        // �Է¹��� ������ �迭�� ����
        for (j = 0; j < 3; j++)
        {
            arr[i][j + 1] = score[j];
        }
        // �й� ����
        arr[i][0] = i + 1;
    }

    // �� �л��� ��� ���
    for (i = 0; i < 10; i++)
    {
        average = 0;
        for (j = 1; j < 4; j++)
        {
            average += arr[i][j];
        }
        average /= 3;
        arr[i][4] = average;
    }

    // �л� ���� ���
    printf("�й� | ���� | ���� | ���� | ���\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.0lf | %.2lf | %.2lf | %.2lf | %.2lf \n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
    }

    // �� ���� ���� ���� ���
    printf("���� ���� ���� \n");
    for (j = 1; j < 4; j++)
    {
        min[j - 1] = arr[0][j]; // �ʱⰪ ����
        for (i = 0; i < 10; i++)
        {
            if (arr[i][j] < min[j - 1])
            {
                min[j - 1] = arr[i][j];
            }
        }
        printf("���� %d�� ���� ����: %.2lf\n", j, min[j - 1]);
    }

    printf("��� ���� ���� ������� ���\n");
    // ��� ������ ������ �迭 ����
    double sortedAverage[10];
    for (i = 0; i < 10; i++)
    {
        sortedAverage[i] = arr[i][4];
    }

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (sortedAverage[i] > sortedAverage[j])
            {
                double temp = sortedAverage[i];
                sortedAverage[i] = sortedAverage[j];
                sortedAverage[j] = temp;
            }
        }
    }
    //���
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (sortedAverage[i] == arr[j][4])
            {
                printf("�й�: %.0lf, ���: %.2lf\n", arr[j][0], arr[j][4]);
                break;
            }
        }
    }

    return 0;
}
