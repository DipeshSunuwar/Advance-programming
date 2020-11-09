#include<iostream>

using namespace std;
//function prototyping
int larger(int,int);
int compareThree(int,int,int);
int main()
{
	int a=10;
	int b=20;
	int c=30;
	int max;
	
	max=larger(a,b);
	cout<<"Largest of a,b is:"<<max<<endl;
	
	int largest=compareThree(a,b,c);
	cout<<"Largest of a,b,c is:"<<largest<<endl;
	
	return 0;
}
int larger(int x, int y)
{
	if(x>=y)
		return x;
	else
		return y;
}
int compareThree(int x,int y,int z)
{
	return larger(x,larger(y,z));
}
