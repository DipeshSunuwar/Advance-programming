//create class and triangle which consist of its three side as private member variable.
//1.compute getter/setter function to get/set value of its private member variable
//2.compute binary (*)operator overloading
#include<iostream>
#include<cmath>

using namespace std;

class Triangle
{
	private:
		int s1;
		int s2;
		int s3;
		int Area;	
	public:
		int getS1();
		int getS2();
		int getS3();
		void setS1(double);
		void setS2(double);
		void setS3(double);
		
		int getArea();
		
		Triangle operator*(Triangle tri);
};
Triangle Triangle::operator*(Triangle tri)
{
	Triangle sum;
	sum.s1=this->s1*tri.s1;
	sum.s2=this->s2*tri.s2;
	sum.s3=this->s3*tri.s3;
	
	return sum;
}

void Triangle::setS1(int s)
{
	s1=s;
}
int Triangle::getS1()
{
	return s1;
}

void Triangle::setS2(int s)
{
	s2=s;
}
int Triangle::getS2()
{
	return s2;
}

void Triangle::setS3(int s)
{
	s3=s;
}
int Triangle::getS3()
{
	return s3;
}
int Triangle::getArea(){
	int s=(getS1()+getS2()+getS3())/2;
	
	int ts=sqrt(s*(s-getS1())*(s-getS2())*(s-getS3()));
	
	return ts;
}
int main()
{
	Triangle tri1,tri2,tri3;
	tri1.setS1(10);
	tri2.setS2(20);
	tri3.setS3(30);
	
	cout<<"The area of triangle 1:"<<tri1.getArea()<<endl;
	
	tri1.setS1(15);
	tri2.setS2(25);
	tri3.setS3(36);
	
	cout<<"The area of triangle 2:"<<tri2.getArea()<<endl;
	
	tri3=tri1*tri2;
	
	cout<<"The area of triangle 3:"<<tri3.getArea();
	
	return 0;
}
