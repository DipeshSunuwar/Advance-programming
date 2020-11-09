//to display largest among two numbers using function templates
#include<iostream>

using namespace std;

template<typename T>

T largestNum(T num1,T num2){
	(num1>num2)? cout<<num1<<"is greater than"<<num2:cout<<num2<<"is greater than"<<num1;
}

int main()
{
	largestNum(2,3);	
}
