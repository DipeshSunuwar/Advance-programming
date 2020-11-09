#include<iostream>
using namespace std;

class Square{
	private:
		int side;
		void initSquare(int);	
	public:
		int getArea() const;
		Square(int);	
	
};
Square::Square(int a){
	initSquare(a);
}

void Square::initSquare(int s){
	side=s;
}

int Square::getArea() const{
	return side*side;
}

int main(){
	
	Square sq(10);
	
	cout<<"The area of squre is: "<<sq.getArea();
	return 0;		
}
