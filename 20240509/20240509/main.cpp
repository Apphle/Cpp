#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#define arr_size 5
void a1()
{
    int arr[arr_size] = { 0, 10, 5, 4, 2 };
    int min = 0;
    int i, j, k;

    for (j = 0; j < arr_size - 1; j++)//�������� �����ʿ� ����
    {
        min = j;
        for (k = j + 1; k < arr_size; k++)//0�� �״����� ���ؾ���
        {
            if (arr[k] < arr[min])//�ΰ��� ���� k�ڸ��� ���� �� �۴ٸ� 
            {
                min = k;//
            }
        }
        int temp = arr[j];
        arr[j] = arr[min];
        arr[min] = temp;
    }

    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void a2()
{
    int arr[arr_size] = { 0, 10, 5, 4, 2 };
    int min = 0;
    int i, j, k;

    for (i = 1; i < 10; i++) {  // 1
        min = arr[i];
        for (j = i - 1; j >= 0 && arr[j] > min; j--) {  // 2
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = min; //3
    }

    for (i = 0; i < arr_size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void a3()
{
    int arr[arr_size] = { 0, 10, 5, 4, 2 };
    int min = 0;
    int i, j, k;
    int temp;
    for (i = 0; i < arr_size - 1; i++) {
        for (j = 0; j < arr_size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

        for (i = 0; i < arr_size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
int main()
{
    a1();
    a2();
    a3();
    return 0;
}
