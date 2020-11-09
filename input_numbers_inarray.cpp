//wap to input 5 numbers in an array $ show thw currrent input numbers $ finally show
//the highest and lowest of them.
#include<iostream>

using namespace std;

int main(){
	const int size = 5;
	int num[5],highest=0,lowest=0;
	cout<<"enter the 5 numbers:";
	for(int i=0;i<size;i++)
	{
		cin>>num[i];
		
	}
	for(int j=0;j<size;j++){
		if(num[j]<num[j+1]){
		highest=num[j+1];
		}
	}
	cout<<"Highest number is"<<highest;
	
	
	
return 0;
}
