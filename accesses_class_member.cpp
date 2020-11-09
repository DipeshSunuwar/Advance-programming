//class definition with member accesses class

#include<iostream>

using namespace std;

class livingbeing
{
	char specification[20];
	int averageager;
	public:
		void read();
		void show();
};

class mammal : private livingbeing
{
	int no_of_organs, no_of_bones;
	protected:
		int iq_level();
	public:
		void readmammal();
		void showmammal();
};

class human : public mammal
{
	char race[20];
	char habitation[30];
	public:
		void readhuman();
		void showhuman();
};

int main()
{
		
}
