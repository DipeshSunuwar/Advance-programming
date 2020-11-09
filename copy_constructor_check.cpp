//copy_constructor
#include<iostream>
using namespace std;

class CopyConstructor
{
	private:
		int x,y;
	public:
		CopyConstructor(int a,int b){
			this->x=a;
			this->y=b;
		}	
		CopyConstructor(const CopyConstructor &obj1)
		{
			x=obj1.x;//right side ko value copy hunxa
			y=obj1.y;
		}
		void display() const
		{
			cout<<"X is:"<<x<<endl<<"Y is:"<<y;
		}
};
int main()
{
	CopyConstructor obj1(10,15);
	CopyConstructor obj2 = obj1;
	cout<<"The values of parameterized constructor are:"<<endl;
	obj1.display();
	cout<<endl;
	cout<<"The values of copy constructor are:"<<endl;
	obj2.display();
	return 0;
}
