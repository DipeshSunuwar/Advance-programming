#include<iostream>

using namespace std;

class Person
{
	public:
		string profession;
		int age;
		Person(){
			profession="unemployed";
			age=1;
			}
			display()
			{
				cout<<"My profession is:"<<profession
					<<"My age is:"<<age<<endl;
				walk();
				talk();
			}
			void walk(){
				cout<<"I can walk";
			}
			void talk(){
				cout<<"I can talk";
			}
};

class FootBaller : public Person
{
	public:
		void playFootball(){
			cout<<"I can play football";
		}
};

class Dancer : public Person{
	public:
		void canDance(){
			cout<<"I can dance Hiphop";
		}
};

int main()
{
	Person P1;
	P1.display();
	
	FootBaller Dipesh;
	Dipesh.profession ="FootBaller";
	Dipesh.age = 18;
	Dipesh.display();

}





