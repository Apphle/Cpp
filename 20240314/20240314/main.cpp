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
	cout << "�߻�! \n";
	/////////////////////////////////
	int num;
	int i = 1;

	cout << "���ϴ� ���� �Է��ϼ��� : ";
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
		cout << "���ڿ��� �Է��ϼ��� : ";
		getline(cin, str);
		cout << "������� �Է� :" << str << endl;
	} while (str != "����");
	return 0;
	/////////////////////////////////
	int num;
	int sum = 0;
	cout << "���ϴ� ���� �Է��ϼ��� :";
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
		cout << "���� ���� �ִ� ����" << endl;
		continue;
		cout << "���� �Ŀ� �ִ� ����" << endl;
	} while (i < 3);
	return 0;
	//////////////////////////////////
	srand(time(NULL));

	int answer = rand() % 100;
	int try_num = 0;
	int guess;

	do
	{
		cout << "������ ����� : ";
		cin >> guess;

		if (guess > answer)
			cout << "�ʹ� Ŀ �ٺ���\n";
		else if (guess < answer)
			cout << "�ʹ� �۾� �ٺ���\n";
	} while (guess != answer);
	
	cout << "�� ... ����" << endl;
	return 0;
	//////////////////////////////////////
	int i, ans;
	cout << "���� �ڵ� ������" << endl;

	int x = rand() % 100;
	int y = rand() % 100;
	while (true)
	{
		cout << x << " + " << y << " = ";
		cin >> ans;
		if (x + y == ans)
		{
			cout << "�����Դϴ�" << endl;
			break;
		}
		else
		{
			cout << "�ٽ�" << endl;
		}
	}
	/////////////////////////////////////
	const int STUDENTS = 10;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 0; i < STUDENTS; i++)
	{
		cout << "���� �Է� :";
		cin >> scores[i];
	}
	for (i = 0; i < STUDENTS; i++)
	{
		sum += scores[i];
	}
	average = sum / STUDENTS;
	cout << "���� ��� : " << average << endl;
	*/
}