#include<iostream>
using namespace std;
int main(){
	int integer1;
	int integer2;
	int sum;
	
	cout<<"enter the first number:";
	cin>>integer1;
	
	cout<<"enter the second number:";
	cin>>integer2;
	
	sum=integer1+integer2;//assign result
	
	cout<<"sum of "<<integer1<<" and "<<integer2<<" is ";
	cout<<sum<<std::endl;//print sum
	return 0;
}
