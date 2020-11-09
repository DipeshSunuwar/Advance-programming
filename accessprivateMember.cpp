#include<iostream>

using namespace std;

class XYZ{
	private:
		int num = 100;
		char ch = 'A';
	public:
		friend class ABC''
	//public:
	//	int getNum();
	//	XYZ(){
	//	num=500;//default constructor
	};
	//private:
//	friend void disp(XYZ obj);
//};
//void disp(XYZ obj){
//	cout<<obj.num<<endl;
//	cout<<obj.ch<<endl;
///	}
//int XYZ:: getNum()
//{
//	return num;
//}
class ABC{
	public:
		void disp(XYZ obj){
			cout<<obj.ch<<endl;
			cout<<obj.num<<endl;
		}
};
int main()
{
	XYZ obj;
	cout<<obj.getNum()<<endl;
	display(obj);
	return 0;
}
