#include<iostream>
using namespace std;

class A{
	private:
		int x;
	public:
		A(int i=0)
		{
			x=i;
		}
		void operator+(const A);
};
	void A :: operator+(const A obj2)
	{
		int sum = x+ obj2.x;
		cout<<"The sum of two objects is:"<<sum;
				
	}
int main()
{
	A obj1(2),obj2(5);
	obj1+obj2;	
}
