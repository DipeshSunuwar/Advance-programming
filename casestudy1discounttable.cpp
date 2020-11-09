#include<iostream>
#include<conio.h>
using namespace std;
int main(){

	int customerid=12345,date,i=0,j=0,day[3],unit_price[3],discount_after=0,dis_amt=0,total=0;
	
	cout<<"\nPlease enter the 3 days stock info";
	cout<<"\n-----------------------------------";
	cout<<"\n-----------------------------------";
	
	for(i=0;i<3;i++){
	
	cout<<"\nCustomer id=>"<<customerid;
	
	cout<<"\nDate=>";
	cin>>date;
	
	customerid++;
	cout<<"\n---------------------------------------";
	cout<<"\n----------------------------------------";
	
	for(j=0;j<3;j++){
			cout<<"\nDay["<<j+1<<"] =>";
			cin>>day[j];
	
			cout<<"\nUnit price["<<j+1<<"]=>";
			cin>>unit_price[j];
			
			total += day[j]*unit_price[j];
			cout<<"\n-------------------------------";
			cout<<"\nTotal charge =>"<<total;
			
}
}

if(total>600){
		discount_after = (total*25)/100;
			}
	else if(total<401&&total>300)
	{
		discount_after = (total*35)/100;
	}
	else{
		discount_after = 0;
	}
	cout<<"\nPrice after discount =>";
	cout<<discount_after;
	
	dis_amt = total - discount_after;
	cout<<"\nDiscount Amount=>"<<dis_amt;
	
	return 0;
}
