#include<iostream>

using namespace std;

int main()
{
	int array[3]={1,2,3};
	//out of bound error
	cout<<(sizeof(array)/sizeof(array[0]));
	cin>>array[4];
	//off by one error
	for(int i=0;i<4;i++)
	{
		cout<<"\t"<<array[i];		
	}
	return 0;
}
