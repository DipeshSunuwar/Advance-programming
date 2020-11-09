#include<iostream>

using namespace std;

class Distance
{
	private:
		int feet;
		int inch;
		
	public:
		class Inches12Ex{};
		class Inches0Ex{};
	Distance(double ft=0,int in=0)
	{
		if(in>=12)
			throw Inches12Ex();
		if(in<0)
			throw Inches0Ex();
		else if()
		feet = ft;
		inch = in;
	}
	
	int getFeet() const{
	return feet;
	}
	
	int getInch() const{
	return inch;
	}
};

int main()
{
	try{
		Distance obj1;
	Distance obj2(10,15);
	
	cout<<"The data of first object is: Feet="
		<<obj1.getFeet()<<endl;
		
	cout<<"The data of first object is: Inch"
		<<obj1.getInch()<<endl;
		
	}	
	catch(Distance::Inches12Ex)
	{
		cout<<"Error,inches greater then 12,invalid";
	}
	catch(Distance::Inches0Ex)
	{
		cout<<"Error, inches less than 0,invalid";
	}
}
