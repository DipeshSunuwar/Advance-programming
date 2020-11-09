#include<iostream>

using namespace std;

int main()
{
	//const int SIZE=3;
	int array[]={1,2,3};
	cout<<(sizeof(array)/sizeof(array[0]));
	return 0;
}
