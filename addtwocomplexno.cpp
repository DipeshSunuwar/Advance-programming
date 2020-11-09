//wap to add two complex numbers using operator overloading
#include<iostream>

using namespace std;

class Complex
{
	private:
		int real,imag;
	public:
		Complex(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		void display()
		{
			cout<<real<<"+ i"<<imag;
		}
};
int main()
{
	Complex obj1,obj2(5,2);
	obj1.display();
	obj2.display();
	obj1+obj2;
}
