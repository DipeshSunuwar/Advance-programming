#include<iostream>
using namespace std;
class Box{
	public:
		//constructor definition
		Box(double l,double b,double h){
			cout<<"Constructor called"<<endl;
			length=l;
			breadth=b;
			height=h;
			cout<<length<<endl;
			cout<<breadth<<endl;
			cout<<height<<endl;
		}
		Box(){
			cout<<"Constructor called"<<endl;
			length=0;
			breadth=0;
			height=0;
			cout<<"Default constructor"
			<<length<<endl
			<<breadth<<endl
			<<height<<endl;
		}
		double Volume(){
			return length*breadth*height;
		}
		int compare(Box box){
			return this->Volume()>box.Volume();
		}
		private:
			double length;//length of box
			double breadth;//breadth of box
			double height;//height of box
};
int main(void){
	Box t1;
		Box Box1(3.3,1.2,1.5);//declare box1
		Box Box2(8.5,6.0,2.0);//declare box2
		
		if(Box1.compare(Box2)){
			cout<<"Box2 is smaller than Box1"<<endl;
		}
		else{
			cout<<"Box2 is equal to or larger than Box1"<<endl;
		}
	return 0;
}
