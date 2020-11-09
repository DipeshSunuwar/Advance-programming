//WAP to find whether a given number is even or odd by using a function returning 
//boolean datatype.
//function:
//bool isEven()
#include<iostream>

using namespace std;

bool isEven(int num)
{
	if(num%2==0)
	{
		return true;
	}	
	return false;
}

int main()
{
	int num,A;
	
	cout<<"Enter the number\n";
	cin>>num;
	
	A=isEven(num);
	
	if(A==1)
	cout<<num<<"is even";
	else
	cout<<num<<"is odd";
	
	return 0;
}
