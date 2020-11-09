#include<iostream>

using namespace std;

class Time{
	private:
		int hour;
		int minutes;
		int sec;
	public:
		int getHour();
		int getMinutes();
		int getSec();
		Time();
		Time(int,int,int);
		void display();
		Time operator +(Time);
		void predisplay();
};
	int Time::getHour(){
		return hour;
	}
	int Time::getMinutes(){
		return minutes;
	}
	int Time::getSec(){
		return sec;
	}
	Time::Time(int h,int m,int s){
		hour=h;
		minutes
	}
	Time Time::operator +(Time a){
		this->hour=hour+a.hour;
		this->minutes=minutes+a.minutes;
		this->sec=sec+a.sec;
		return Time(hour,minutes,sec);
	} 
	void Time::display(){
		while(sec>=60){
			minutes++;
			sec=sec-60;
				while(minutes>=60){
					hour++;
					minutes=minutes-60;
				}
		}						
	}
	
	void Time::predisplay(){
		cout<<hour<<":"<<minutes<<":"<<sec<<endl;
	}

int main(){
	Time T3;
	int h,m,s;
	cout<<"Enter the hours:";
	cin>>h;
	cout<<"Enter the minutes:";
	cin>>m;
	cout<<"Enter the seconds:";
	cin>>s;
	Time T1(h,m,s);
	cout<<"Enter the hours:";
	cin>>h;
	cout<<"Enter the minutes:";
	cin>>m;
	cout<<"Enter the seconds:";
	cin>>s;
	Time T2(h,m,s);
	T3=T1+T2;
	T3.predisplay();
	T3.display();
}
