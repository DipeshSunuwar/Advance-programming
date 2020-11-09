#include<iostream>

using namespace std;

class Box
{
	double width;
	
	public:
		friend void printWidth(Box box);
		void setWidth(double wid);
	};
		//member function definition
		void Box::setWidth(double wid){
			width = wid;
		}
	//Note:printWidth() is not a member function of any class
	void printWidth(Box box){
		//because printwidth() is a friend of box it can directly access any member of this
		//class
		cout<<"Width of box:"<<box.width<<endl;
	}
	
//main function for the program
int main(){
	Box box; 
	//set box width without member function
	box.setWidth(10.0);
	//use friend function to print the width
	printWidth(box);
	return 0;
}
