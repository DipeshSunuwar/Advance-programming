//A program to learn about exception classes

#include<iostream>

using namespace std;

int main()
{
	const int SIZE = 100000000;
	char* ptr;
	try
	{
		ptr = new char[SIZE];//checks bad memory allocation
	}
	catch(bad_alloc){
		cout<<"\n bad_alloc exception: can't allocation memory";
	}
	delete[] ptr;
	cout<<"\n Memory use is successful.\n";
	return 0;
}
