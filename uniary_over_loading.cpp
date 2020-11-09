#include<iostream>

using namespace std;

class Test
{
	private:
		int num;
	public:
		Test()
		{	
			num=0;
		}
		void operator ++()
		{
			
			num = num+10;
		}
		void operator --(int)
		{
			num=num-10;
		}
		void display()
		{
			cout<<"The value of num is:"<<num<<endl;
		}
};

int main()
{
	Test obj;
	obj.display();
	++obj;	//calling a function "void operator ++()"
	obj.display();
	obj--;
	obj.display();
	return 0;
}
