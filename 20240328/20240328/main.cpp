#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	string color;

	double calcArea();
};

class Rectangle
{
public:
	int width, height;
	int calcArea()
	{
		return width * height;
	}
};

class printdata
{
public:
	void print(int i) { cout << i << endl; }
	void print(double f) { cout << f << endl; }
	void print(string s = "No data") { cout << s << endl; }

};

double Circle::calcArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	/*
	Circle obj;

	obj.radius = 100;
	obj.color = "blue";

	cout << "원의 면적 = " << obj.calcArea() << "\n";
	return 0;
	
	Rectangle obj;
	obj.width = 10;
	obj.height = 2;

	cout << "사각형의 면적 = " << obj.calcArea() << "\n";
	return 0;
	
	printdata obj;
	obj.print(1);
	obj.print(3.14);
	obj.print("C++ is cool");
	obj.print();
	return 0;
	*/

	Circle c;
	c.radius = 10;
	cout << c.calcArea() << endl;
	return 0;

}