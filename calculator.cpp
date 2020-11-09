//calculator
#include<iostream>
using namespace std;

template<typename T>
class Calculator
{
	private:
		T num1,num2;
		
	public:
		Calculator(T num1,T num2){
			this->num1=num1;
			this->num2=num2;	
		}
		T add();
};

template<typename T>
T Calculator<T>::add(){
	T result;
	result=num1+num2;
	return result;
	//cout<<"Result:";
}

int main()
{
	int a,b;
	
	cout<<"Enter two numbers to perform task:";
	cin>>a;
	cin>>b;
	Calculator<float>C(a,b);
	cout<<C.add()<<endl;
}
