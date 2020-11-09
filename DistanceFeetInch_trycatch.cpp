#include<iostream>
#include<string>

using namespace std;
class Distance
{
	private:	
		int feet,inches;
	public:
		class InchesEx{
			string originFunction;
			int inchValue;
		public:
			InchesEx(string msg,int value)
			{
				originFunction = msg;
				inchValue = value;
			}
		}; //exception class
		Distance(int ft=0, int in=0)
		{
			if(in>=12.0)
				throw InchesEx("2-arg-constructor",in);
				feet=ft;
				inches=in;
		}
		int getFeet()
		{
			return feet;
		}
		int getInches()
		{
			if(inches<0)
				throw InchesEx("getInch Function",inches)
				return inches;
		}
};


int main()
{
	do{
		bool status = true;
	try
	{
		int feet,inches;
		
		cout<<"\n Enter a distance in feet and inches";
		cin>>feet>>inches;
		Distance second(feet,inches);
		
		cout<<"\n The data of second object is:"<<"Feet:"
			<<second.getFeet()<<"Inch:"<<second.getInches()<<endl;
			status=false;
	}
	catch(Distance::InchesEx obj)
	{
		cout<<"Exception! In"<<obj.originFunction
			<<"\n Inches value of"<<obj.inchValue
			<<"is out of bounds";
	}
}
	while(status);
	return 0;
}
