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
		printf("데이터를 입력할시 1, 데이터를 추출할시 2, 종료를 원할시 3을 입력해주세요 : ");//push or pop 선택
		scanf("%d", &choise);

		switch (choise)//switch를 사용해 push, pop각각 실행
		{
			case 1:
				printf("push할 수를 입력하세요 :\n");
				scanf("%d", &num);
				arr[i] = num;//배열에 값 넣기
				for (j = 0; j < 5; j++)//하나 넣을때마다 출력
				{
					printf("[ %d ]\n", arr[j]);
				}
				i++;//값을 넣었으므로 1증가
				break;
			case 2:
				if (i == 0)//배열의 0번째 칸에 값이 없을떄 pop을 시도할시 못한다고 안내
				{
					printf("처음엔 pop할 수 없습니다.\n");
				}
				arr[i - 1] = 0;//전에 push를 했을경우 위에서 i를 ++을 해주었기 때문에 현재 i보다 1 작은 곳에 0으로 초기화
				for (j = 0; j < 5; j++)//하나 넣을때마다 출력
				{
					printf("[ %d ]\n", arr[j]);
				}
				i -= 1;//하나를 뺐으므로 i하나 줄이기
				break;	

		}
		if (i == 5)//배열이 꽉 찾을경우
		{
			printf("꽉 찼습니당!\n");
		}
		else if (i < 0)//위에서 pop하는경우 i가 -로 가는경우 방지
		{
			i = 0;
		}
		else if (i > 5)//위에서 push하는경우 i가 5이상으로 가는경우 방지
		{
			i = 5;
		}
		
	}
	return 0;
}