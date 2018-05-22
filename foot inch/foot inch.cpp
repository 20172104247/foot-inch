// foot inch.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
using namespace std;
class CHeight
{
private:
	double inchs;
	double feet;
public:
	CHeight()
	{
		inchs = 0;
		feet = 0;
	}
	void setup(double f, double i)
	{
		inchs = inchs + i;
		feet = feet + f;
		if (inchs > 12)
		{
			int a = inchs / 12;
			feet = feet + a;
			inchs = inchs - 12 * a;
		}
	}
	void set_matric(double m)
	{
		feet = m*3.2808398950131;
		int b = feet / 1;
		double a = feet - b;
		inchs = a * 12;
		feet = b;
	}
	void display()
	{
		cout << feet << " 英尺 " << inchs << " 英寸 " << endl;
	}
};

int main()
{
	CHeight ob;
	double i, f;
	double m;
	cin >> m >> f >> i;
	ob.set_matric(m);
	ob.display();
	ob.setup(f, i);
	ob.display();
	return 0;
}
