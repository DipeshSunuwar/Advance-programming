
#include<iostream>

using namespace std;

int division(int x, int y)
{
	int a; 
	if (y==0)
		throw "Division by zero condition!";
	return (x/y);
}
int main()
{
	int x = 50;
	int y = 0;
	int z;
	try{
	z= division(x,y);
	cout<<z<<endl;
	}
	catch(const char *msg){
		cout<<"Exception occured \n"<<msg;
	}
}
