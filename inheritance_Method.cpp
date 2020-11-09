#include<iostream>

using namespace std;

class Base{
	private:
		int x;
		void display(){
			cout<<"Private of Base";
		}
	public:
		int y;
		void display2(){
			cout<<"-------------";
		}
	protected:
		int z;
		void display3(){
			cout<<"------------";
		}
};

class PrivateDerived:private Base{
	public:
		void ShowMessage(){
			display();
			display2();
			display3();
		}
};


class PublicDerived:public Base{
	public:
		void ShowMessage(){
			display();
			display2();
			display3();
		}
};
int main(){
	Base B1;
	//B1.display();
	B1.display2();
	//B1.display3();
	
	PrivateDerived pri1;
	pri1.ShowMessage();
	pri1.display();
	pri1.display2();
	pri1.display3();
}
