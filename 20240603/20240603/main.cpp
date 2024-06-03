#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void set_pointer(const char** q)
{
	*q = "all that glisters is not gold.";
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mui(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}

void menu()
{
	printf("-------------------------------\n");
	printf("0번 = +\n");
	printf("1번 = -\n");
	printf("2번 = *\n");
	printf("3번 = /\n");
	printf("-------------------------------\n");
}
int main(void)
{
	int choice, result, x, y;
	int (*pf[4])(int, int) = { add, sub, mui, div };

	while (1)
	{
		menu();
		printf("메뉴를 선택하세요: ");
		scanf("%d", &choice);

		if (choice < 0 || choice >= 4)
			break;

		printf("2개의 정수를 입력하세요:");
		scanf("%d %d", &x, &y);

		result = pf[choice](x, y);
		printf("연산 결과 = %d\n", result);
	}
	/*
	int result;
	int (*pf)(int, int);

	pf = add;
	result = pf(10, 20);
	printf("10+20 = %d\n", result);

	pf = sub;
	result = pf(10, 20);
	printf("10-20 = %d\n", result);
	*/
	/*
	int i, n;
	const char* fruits[] = { "apple", "blueberry", "orange", "melon" };

	n = sizeof(fruits) / sizeof(fruits[0]);

	for (i = 0; i < n; i++)
	{
		printf("%s\n", fruits[i]);
	}
	*/
	/*
	const char* p;
	set_pointer(&p);

	printf("오늘의 격언: %s \n", p);
	*/

	/*
	int i = 100;
	int* p = &i;
	int** q = &p;

	*p = 200;
	printf("i = %d\n", i);
	**q = 300;
	printf("i = %d\n", i);
	*/

	return 0;
}
