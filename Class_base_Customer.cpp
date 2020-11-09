//base class customer(name,phone no.).Derive

#include<iostream>

using namespace std;

class Customer{
	private:
		string name[];
		int phone_no[];
	public:
		
		void setName(string [],int);
		void setPhone(int [],int);
		
		string getName();
		int getPhone();
};

void Customer::setName(string name[],int i){
	this->name[i]=name[i];
	cout<<name[i];
}

void Customer::setPhone(int Phone_no[],int i){
	this->phone_no[i]=phone_no[i];
}

string Customer::getName(){
	return name[];
}

int Customer::getPhone(){
	return phone_no[];
}

class Depositor : public Customer{
	private:
		int accno;
		int balance;
	public:
		void setAccno(int);
		int getAccno();
		
		void setBalance(int);
		int getBalance();
	
};

class Borrower: public Depositor{
	private:
		int loanno;
		int loanamt;
	
	public:
		void setLoanno(int);
		int getLoanno();
		
		void setLoanamt(int);
		int getLoanamt();
		
		void getDetails();
		void Display();
};

int main(){	
	int n;
	
	cout<<"Enter No of Customer Details You want:";
	cin>>n;
	
	string name[10];
	int phone_no[10];
	
	Customer cus;
	
	for(int i=0;i<n;i++){
		cout<<"Enter Customer Name: ";
		cin>>name[i];
		cout<<"Enter Customer Phone No.:";
		cin>>phone_no[i];
		cus.setName(name,i);
		cus.setPhone(phone_no,i);
	}
}
