//wap to calculate Area of as per input
//A class calculate has three member variable length, breadth and height.
// if user pass two parameter then system should show Area.

#include<iostream>

using namespace std;

class Area
{
	private:
		void area(double l,double b);
		void area(double l,double b,double h);		
};
void Area::Area(double l,double b)
{
	cout<<l*b<<endl;
}
void Area::Area(double l,double b,double h)
{
	cout<<l*b*h;
}

int main()
{
	void Area();
	obj.area(10,14);
	obj.Area(12,10,13);
	return 0;
}
