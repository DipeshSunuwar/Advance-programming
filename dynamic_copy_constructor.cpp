//copy_constructor
#include<iostream>
#include<cstring>
using namespace std;

class CopyConstructor
{
	char *s_copy;
	public:
		CopyConstructor(const char *str)
		{
			s_copy = new char[16];//dynamic memory allocation
			strcpy(s_copy,str);
		}
		CopyConstructor(const CopyConstructor &str)
		{
			s_copy = new char[16];//dynamic memory allocation
			strcpy(s_copy,str.s_copy);
		}
		void operator = (const CopyConstructor &str)
		{
			delete[]s_copy;
			s_copy = new char[16];//dynamic memory allocation
			strcpy(s_copy,str.s_copy);
			cout<<"\n 0I am operator overloading"<<endl;
			display();
		}
		void concatenate(const char *str)
		{
			strcat(s_copy,str);//concatenating two strings
		}
		~CopyConstructor()
		{
			delete[]s_copy;
		}
		void display()
		{
			cout<<s_copy<<endl;
		}
};
int main()
{
	CopyConstructor c1("copy");
	CopyConstructor c2 = c1;//copy constructor
	c1.display();
	c2.display();
	c1.concatenate("constructtor");//c1 is invoking concatenate
	c1.display();
	c2.display();
	return 0;
}
