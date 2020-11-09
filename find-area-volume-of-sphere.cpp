//WAP to find the area and volume of sphere using function.
// functions:
//float inputRadius
//void calArea()
//void calcVolume()
#include<iostream>
#define pi 3.14
using namespace std;

float inputRadius(){
	float r;
	
	cout<<"Enter the radius:";
	cin>>r;
	
	return r;
}
void calcArea(double r){
	int area;
	
	area=4*pi*r*r;
	cout<<"Area of sphere is"<<area<<endl;
}
void calcVolume(double r){
	int Volume;
	
	Volume=(4*pi*r*r)/3;
	cout<<"Volume of the sphere:"<<Volume<<endl;
}
int main()
{
	double r;
	
	r=inputRadius();
	
	calcArea(r);
	calcVolume(r);
	return 0;
}
