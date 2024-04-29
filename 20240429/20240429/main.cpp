#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	double arr[10][5] = { 0 };
	double score[3] = {0};
	int i;
	int j;
	double average = 0;

	for (i = 0; i < 10; i++)
	{
		printf("국어, 영어, 수학 점수를 입력하세요 : ");
		scanf("%lf %lf %lf", &score[0], &score[1], &score[2]);
		for (j = 0; j < 3; j++)
		{
			arr[i][j + 1] = score[j];
		}
	}
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
	printf("학번 | 국어 | 영어 | 수학 | 평균\n");
	for (i = 0; i < 10; i++)
	{
		printf("%.2lf | %.2lf | %.2lf | %.2lf | %.2lf \n", arr[i][0], arr[i][1], arr[i][2], arr[i][3], arr[i][4]);
	}
}