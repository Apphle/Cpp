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
		cout << "����� x, y�� �Է��ϼ��� : ";
		cin >> x, y;
		cout << "���ϴ� ��ȣ�� �Է��ϼ��� : ";
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
				cout << "���Ͻô� ��ȣ�� �Է����ּ���. ����) +, -, *, /" << endl;
				count++;
				break;
			case 'Q':
				break;
		}
	}
	double num;
	while (n.oper != 'Q' && count != 0)
	{
		cout << "�߰��� ����� ���� �Է��ϼ��� : ";
		cin >> num;
		cout << "���ϴ� ��ȣ�� �Է��ϼ��� : ";
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
			cout << "���Ͻô� ��ȣ�� �Է����ּ���. ����) +, -, *, /" << endl;
			count++;
			break;
		case 'Q':
			cout << "���� �� = " << n.sum << endl;
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
		cout << "����� x, y�� �Է��ϼ��� : ";
		cin >> n.x, n.y;
		cout << "���ϴ� ��ȣ�� �Է��ϼ��� : ";
		cin >> n.oper;
		cout << "�ٽ� �Է��ϼ��� : " << endl;
	}
	
	calculator(n.x, n.y);
}