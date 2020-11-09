//wap to implement 2 function using pointers
#include<iostream>

using namespace std;
//void getSales(double,int);
//double calculate(double,int);
void getSales(double *arr,int SIZE)
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<"Enter sales of day#:"<<i+1;
		cin>>*(arr+i);
		//cin>>arr[i];
	}
}

double calculate(double *arr,int SIZE)
{
	double sum=0;
	for(int i=0;i<SIZE;i++)
	{
		sum+=arr[i];
	}
	
}
int main(){
	double sum;
	const int numDays=3;
	//dynamically
	double *sales;
	sales = new double[numDays];
	
	getSales(sales,numDays);
	calculate(sales,numDays);	
	
	cout<<"Sum = "<<sum;
}

