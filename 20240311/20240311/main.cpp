#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	/*
	cout << "Hello_World!" << endl;
	return 0;
	//////////////////////////////
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	return 0;
	//////////////////////////////
	string name;
	cout << "�̸��� �Է��ϼ���:";// cout == printf
	cin >> name;//scanf == cin
	cout << name << " ȯ���մϴ�." << endl;
	return 0;
	//////////////////////////////
	int money;
	int price;
	cout << "������ �ִµ�: ";
	cin >> money;
	cout << "��簻 ����: ";
	cin >> price;

	int count = money / price;
	int my_money = money % price;
	cout << "����ִ� ���� :" << count << endl;
	cout << "�ܵ� :" << my_money << endl;
	return 0 ;
	//////////////////////////////

	double f_temp = 60;
	double c_temp;

	cout << "�µ�: ";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "ȭ���µ�:" << f_temp << ", �����µ�:" << c_temp << endl;

	return 0;
	///////////////////////////////
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "�� �ֻ��� �� ��:" << "�ֻ���1 : " << dice1 << ", �ֻ���2 : " << dice2 << " = " << dice1 + dice2 << endl;
	return 0;
	///////////////////////////////
	bool b;
	b = (1 == 2);

	cout << std::boolalpha;//boolalpha �� ������ 0, 1�� ��µ� ������ true, flase�� ���
	cout << b << endl;
	return 0;
	///////////////////////////////
	int x, y;

	cout << "x���� �Է��ϼ���: ";
	cin >> x;
	cout << "y���� �Է��ϼ���: ";
	cin >> y;

	if (x > y)
	{
		cout << "x�� �� ŭ" << endl;
	}
	else if (x == y)
	{
		cout << "x, y ���� ����" << endl;
	}
	else
	{
		cout << "y�� �� ŭ" << endl;
	}
	return 0;
	///////////////////////////////
	int age;
	cout << "���̸� �Է��ϼ���: ";
	cin >> age;

	if (age <= 12)
		cout << "����� �Դϴ�." << endl;
	else if (age <= 19)
		cout << "���� û�ҳ� �Դϴ�." << endl;
	else if (age <= 50)
		cout << "���� �Դϴ�." << endl;
	else
		cout << "���� �Դϴ�." << endl;

	return 0;
	///////////////////////////////
	char secret_code = 'd';

	cout << "����� ���߸� ���߸� �Ѱ��� �帳�ϴ�."
	///////////////////////////////
	int x, y, z;

	cout << "x���� �Է��ϼ���: ";
	cin >> x;
	cout << "y���� �Է��ϼ���: ";
	cin >> y;
	cout << "z���� �Է��ϼ���: ";
	cin >> z;

	if (x > y && x > z)
		cout << "x�� ���� ŭ" << endl;
	else if (y > x && y > z)
		cout << "y�� ���� ŭ" << endl;
	else if (x == y && y == z)
		cout << "x, y, z ���� ����" << endl;
	else
		cout << "z�� ���� ŭ" << endl;
	return 0;
	*/
	int num;

	cout << "���ڸ� �Է��ϼ���: ";
	cin >> num;

	switch (num)
	{
	case 0:
		cout << "0";
		break;
	case 1:
		cout << "1";
		break;
	case 2:
		cout << "2";
		break;
	case 3:
		cout << "3";
		break;
	default:
		cout << "many";
		break;
	}
	return 0;
}