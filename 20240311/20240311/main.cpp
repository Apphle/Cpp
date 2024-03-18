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
	cout << "이름을 입력하세요:";// cout == printf
	cin >> name;//scanf == cin
	cout << name << " 환영합니다." << endl;
	return 0;
	//////////////////////////////
	int money;
	int price;
	cout << "가지고 있는돈: ";
	cin >> money;
	cout << "밤양갱 가격: ";
	cin >> price;

	int count = money / price;
	int my_money = money % price;
	cout << "살수있는 개수 :" << count << endl;
	cout << "잔돈 :" << my_money << endl;
	return 0 ;
	//////////////////////////////

	double f_temp = 60;
	double c_temp;

	cout << "온도: ";
	cin >> f_temp;
	c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "화씨온도:" << f_temp << ", 섭씨온도:" << c_temp << endl;

	return 0;
	///////////////////////////////
	srand(time(NULL));
	int dice1 = (rand() % 6) + 1;
	int dice2 = (rand() % 6) + 1;

	cout << "두 주사위 의 합:" << "주사위1 : " << dice1 << ", 주사위2 : " << dice2 << " = " << dice1 + dice2 << endl;
	return 0;
	///////////////////////////////
	bool b;
	b = (1 == 2);

	cout << std::boolalpha;//boolalpha 가 없으면 0, 1로 출력됨 있으면 true, flase로 출력
	cout << b << endl;
	return 0;
	///////////////////////////////
	int x, y;

	cout << "x값을 입력하세요: ";
	cin >> x;
	cout << "y값을 입력하세요: ";
	cin >> y;

	if (x > y)
	{
		cout << "x가 더 큼" << endl;
	}
	else if (x == y)
	{
		cout << "x, y 값이 같음" << endl;
	}
	else
	{
		cout << "y가 더 큼" << endl;
	}
	return 0;
	///////////////////////////////
	int age;
	cout << "나이를 입력하세요: ";
	cin >> age;

	if (age <= 12)
		cout << "잼민이 입니다." << endl;
	else if (age <= 19)
		cout << "비행 청소년 입니다." << endl;
	else if (age <= 50)
		cout << "성인 입니다." << endl;
	else
		cout << "노인 입니다." << endl;

	return 0;
	///////////////////////////////
	char secret_code = 'd';

	cout << "비밀을 맟추면 비요뜨를 한개더 드립니다."
	///////////////////////////////
	int x, y, z;

	cout << "x값을 입력하세요: ";
	cin >> x;
	cout << "y값을 입력하세요: ";
	cin >> y;
	cout << "z값을 입력하세요: ";
	cin >> z;

	if (x > y && x > z)
		cout << "x가 가장 큼" << endl;
	else if (y > x && y > z)
		cout << "y가 가장 큼" << endl;
	else if (x == y && y == z)
		cout << "x, y, z 값이 같음" << endl;
	else
		cout << "z가 가장 큼" << endl;
	return 0;
	*/
	int num;

	cout << "숫자를 입력하세요: ";
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