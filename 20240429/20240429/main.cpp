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
        printf("국어, 영어, 수학 점수를 입력하세요 : ");
        scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
        // 입력받은 점수를 배열에 저장
        for (j = 0; j < 3; j++)
        {
            arr[i][j + 1] = score[j];
        }
        // 학번 설정
        arr[i][0] = i + 1;
    }

    // 각 학생의 평균 계산
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

    // 학생 정보 출력
    printf("학번 | 국어 | 영어 | 수학 | 평균\n");
    for (i = 0; i < 10; i++)
    {
        printf("%.0lf | %.2lf | %.2lf | %.2lf | %.2lf \n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
    }

    // 각 과목별 최저 점수 계산
    printf("과목별 최저 점수 \n");
    for (j = 1; j < 4; j++)
    {
        min[j - 1] = arr[0][j]; // 초기값 설정
        for (i = 0; i < 10; i++)
        {
            if (arr[i][j] < min[j - 1])
            {
                min[j - 1] = arr[i][j];
            }
        }
        printf("과목 %d의 최저 점수: %.2lf\n", j, min[j - 1]);
    }

    printf("평균 점수 낮은 순서대로 출력\n");
    // 평균 점수를 저장할 배열 생성
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
    //출력
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (sortedAverage[i] == arr[j][4])
            {
                printf("학번: %.0lf, 평균: %.2lf\n", arr[j][0], arr[j][4]);
                break;
            }
        }
    }

    return 0;
}
