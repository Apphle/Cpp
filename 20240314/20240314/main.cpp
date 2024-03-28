#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	int n = 10;
	while (n > 0)
	{
		cout << n << " ";
		n--;
	}
	cout << "발사! \n";
	/////////////////////////////////
	int num;
	int i = 1;

	cout << "원하는 단을 입력하세요 : ";
	cin >> num;

	while (i <= 9)
	{
		cout << num << " * " << i << " = " << num * i << endl;
		i++;
	}
	return 0;
	/////////////////////////////////
	string str;
	do
	{
		cout << "문자열을 입력하세요 : ";
		getline(cin, str);
		cout << "사용자의 입력 :" << str << endl;
	} while (str != "종료");
	return 0;
	/////////////////////////////////
	int num;
	int sum = 0;
	cout << "원하는 수를 입력하세요 :";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		cout << sum << " + " << i << " = " << sum + i << endl;
		sum += i;
	}
	/////////////////////////////////
	for (int i = 0; i < 10; i++)
	{
		cout << i << " ";
		if (i == 4)
			break;
	}
	//////////////////////////////////
	int i = 0;
	do 
	{
		i++;
		cout << "문장 전에 있는 문장" << endl;
		continue;
		cout << "문장 후에 있는 문장" << endl;
	} while (i < 3);
	return 0;
	//////////////////////////////////
	srand(time(NULL));

	int answer = rand() % 100;
	int try_num = 0;
	int guess;

	do
	{
		cout << "정답을 마춰바 : ";
		cin >> guess;

		if (guess > answer)
			cout << "너무 커 바보야\n";
		else if (guess < answer)
			cout << "너무 작아 바보야\n";
	} while (guess != answer);
	
	cout << "쯧 ... 정답" << endl;
	return 0;
	//////////////////////////////////////
	int i, ans;
	cout << "문제 자동 생성기" << endl;

	int x = rand() % 100;
	int y = rand() % 100;
	while (true)
	{
		cout << x << " + " << y << " = ";
		cin >> ans;
		if (x + y == ans)
		{
			cout << "정답입니당" << endl;
			break;
		}
		else
		{
			cout << "다시" << endl;
		}
	}
	/////////////////////////////////////
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << "성적 입력 :";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}
	average = sum / STUDENTS;
	cout << "성적 평균 : " << average << endl;
	*/
}