#include <iostream>
using namespace std;
class Calcualtor
{
public:
	double x, y;
	double sum;
	char oper;
};

double calculator(double x, double y)
{
	class Calcualtor n;
	int count = 0;
	char s = n.oper;
	while (s != 'Q' && count == 0)
	{
		cout << "계산할 x, y를 입력하세요 : ";
		cin >> x, y;
		cout << "원하는 기호를 입력하세요 : ";
		cin >> n.oper;
		switch(n.oper)
		{
			case '+':
				n.sum = x + y;
				count++;
				break;
			case '-':
				n.sum = x - y;
				count++;
				break;
			case '*':
				n.sum = x * y;
				count++;
				break;
			case '/':
				n.sum = x / y;
				count++;
				break;
			case 'C':
				n.sum = 0;
				count++;
				break;
			case 'help':
				cout << "원하시는 기호를 입력해주세요. 예시) +, -, *, /" << endl;
				count++;
				break;
			case 'Q':
				break;
		}
	}
	double num;
	while (n.oper != 'Q' && count != 0)
	{
		cout << "추가로 계산할 수를 입력하세요 : ";
		cin >> num;
		cout << "원하는 기호를 입력하세요 : ";
		cin >> n.oper;
		switch (n.oper)
		{
		case '+':
			n.sum += num;
			count++;
			break;
		case '-':
			n.sum -= num;
			count++;
			break;
		case '*':
			n.sum *= num;
			count++;
			break;
		case '/':
			n.sum /= num;
			count++;
			break;
		case 'C':
			n.sum = 0;
			count++;
			break;
		case 'help':
			cout << "원하시는 기호를 입력해주세요. 예시) +, -, *, /" << endl;
			count++;
			break;
		case 'Q':
			cout << "계산된 값 = " << n.sum << endl;
			break;
		}
	}
	double sum = n.sum;

	return sum;
}

int main()
{
	class Calcualtor n;
	while (n.oper != 'Q' && n.oper != 'C' && n.oper != 'help')
	{
		cout << "계산할 x, y를 입력하세요 : ";
		cin >> n.x, n.y;
		cout << "원하는 기호를 입력하세요 : ";
		cin >> n.oper;
		cout << "다시 입력하세요 : " << endl;
	}
	
	calculator(n.x, n.y);
}