#include<iostream>

using namespace std;

class Square
{
	public:
		Square(double);//constructor with a parameter
		void setSide(double);//to initilize a member variable
		double getSide();//to return a value of member variable
		double area();//formula area=side*side
	private:
		double side;//member variable declaration
}
Square::Square(void){
	cout<<"Area of the square is:"<<endl;
}
int main(){
	Square square(16);
	
	return 0;
}
