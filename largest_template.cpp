#include<iostream>

using namespace std;

template <class T,class U>

T largest(T num1,U num2)
{
	if(num1>num2)
		cout<<num1<<"is greater than num2";
	else
		cout<<num2<<"is greater than num1";
}

int main()
{
	largest('a','A');
	
}
