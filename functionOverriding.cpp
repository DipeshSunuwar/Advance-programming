#include<iostream>

using namespace std;

class Parent{
	public:
		void showMessage(){
			cout<<"Function call inside parent";
		}
};
//inherit parent publicly into child class
class Child:public Parent{
	public:
		void showMessage(){
			cout<<"Function call inside child";
			Parent::showMessage();//parent class called from child
		}
};

int main(){
	Parent P;
	P.showMessage();
	cout<<endl;
	Child C;
	C.showMessage();
	cout<<endl;
	//use the object of child class and calll the showMessage function of parent class
	C.Parent::showMessage();//parent class called from child class
	
	return 0;
}
