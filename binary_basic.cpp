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
		void display(){
			cout<<x;
		}
};
int main()
{
	A obj1,obj2(5);
	obj1.display();
	obj2.display();
		
}
