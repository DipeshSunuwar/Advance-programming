#include<iostream>

using namespace std;

class Shape{
	public:
		void setWidth(int);
		void setLength(int);
	protected:
		int width;
		int length;
};

class postcast:public Shape{
	public:
		int getArea()
		{
			return (width*length);
		}
};
class Rectangle:public postcast,public Shape
{
	public:
		Rectangle()
		{
			cout<<"Rectangle class:"<<endl;
		}
	private:
};

int main()
{
	Rectangle R;
	R.etwidth(20);
	R.Setlength(30);
	cout<<R.getArea();
}
