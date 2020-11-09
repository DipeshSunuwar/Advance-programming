//wap to calculate the palindrome number of the given range(high & lower or lower 
//or high)which are prime
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int high,low,rev,digit,num,temp,count;
	cout<<"Enter the lower number"<<endl;
	cin>>low;
	cout<<"Enter the high number"<<endl;
	cin>>high;
	
	if(low>high)
	{
		low=low+high;
		high=low-high;
		low=low-high;
	}	
	
	temp==num;
	
	do{
		digit=temp%10;
		rev=(rev*10)+digit;
		temp=temp/10;
	}
	while(temp!=10);
	cout<<rev;
	if(rev==num)
	cout<<num<<"Is palindrome";
	
	else
	cout<<num<<"is not palindrome";
	
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		count++;
	}
	if(count==0)
	{
		cout<<"Prime number";
	}
	return 0;
}
