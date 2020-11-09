#include<iostream>

using namespace std;

class Distance
{
	private:
		int feet;
		int inch;
		
	public:
	Distance(double ft=0,int in=0)
	{
		if(in>=12)
			throw "inches greater than 12 is invalid!"
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
	Distance obj2(10,5);
	
	cout<<"The data of first object is: Feet="
		<<obj1.getFeet()<<endl;
		
	cout<<"The data of first object is: Inch"
		<<obj1.getInch()<<endl;
		
	}	
	catch(const char *msg)
	{
		cout<<msg;
	}
}
