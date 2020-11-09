#include<iostream>

using namespace std;

bool isEven(int num)
{
	if(num%2==0)
		return true;
	return false;
}
int main(){
	int num,A;
	cout<<"enter the number:";
	cin>>num;
	
	if(isEven(num))
	{
		cout<<"is even";
	}
	else
	cout<<"is odd";
	return 0;
}

