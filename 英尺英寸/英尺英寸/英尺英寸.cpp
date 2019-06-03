#include "stdafx.h"
#include"iostream"
using namespace std;
class CLenth
{
private:
	int feet;
	int inch;
	int check();
public:
	CLenth();
	int setLenth(int f, int i);
	void display();
	CLenth operator+(CLenth&otemp);
};
CLenth::CLenth()
{
	feet = 0;
	inch = 0;
}
CLenth CLenth::operator+(CLenth &ob)
{
	CLenth temp;
	temp.setLenth(feet + ob.feet, inch + ob.inch);
	return temp;
}
int CLenth::setLenth(int f, int i)
{
	feet = f;
	inch = i;
	check();
	return 0;
}
int CLenth::check()
{
	int lenth = 1;
	if (inch >= 12)
	{
		feet = feet + inch / 12;
		inch = inch % 12;
	}
	return 0;
}
void CLenth::display()
{
	cout << "feet = " << feet << " inch = " << inch << endl;
}
int main()
{
	CLenth ob1, ob2, ob3;
	ob1.setLenth(1, 25);
	ob1.display();
	ob2.setLenth(1, 25);
	ob2.display();
	ob3 = ob1 + ob2;
	ob3.display();
	return 0;
}
