#include<iostream>
using namespace std;

class construct
{
	private:
		int a,b;
	public:
		construct()
		{
			a=0;
			b=0;
		}
		//copy constructor
		//construct(const construct &)
		//{
			
		//}
		void setA(int x)
		{
			a=x;
		}
		int getA()
		{
			return a;
		}
		int setB(int y)
		{
			b=y;		
		}
		int getB()
		{
			return b;
		}
};
int main()
{
	construct c;
	cout<<c.getA();
	c.setA(70);
	cout<<c.getA();
	cout<<c.getB();
	c.setB(40);
	cout<<c.getB();
//	cout<<"a:"<<c.a<<endl<<"b:"<<c.b;
	return 1;
}
