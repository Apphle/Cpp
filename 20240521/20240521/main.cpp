#include <stdio.h>

int main()
{
	int x = 10, y = 20;
	int* p = NULL;
	p = &x;

	printf("p = %p\n", p);
	printf("p = %u\n", *p + 1);
	p = &y;
	printf("p = %p\n", p);
	printf("p = %u\n", *p);


	/*
	int i = 10, j = 20;
	int* p;
	p = &i;

	printf("i狼 林家 = %d\n", *p);
	p = &j;
	printf("j狼 林家 = %d\n", *p);
	*/
	/*
	int i = 10;
	char c = 69;
	double f = 12.3;
	int* pi = NULL;
	double* pf = NULL;
	printf("%p %p\n", pi, &i);
	printf("%p %p\n", pf, &f);
	pi = &i;
	pf = &f;
	printf("%p %p\n", pi, &i);
	printf("%p %p\n", pf, &f);
	*/

	/*
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i狼 林家 = %p\n", &i);
	printf("c狼 林家 = %p\n", &c);
	printf("f狼 林家 = %p\n", &f);
	*/
}