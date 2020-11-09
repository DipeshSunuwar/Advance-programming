#ifndef FeetInch_H
#define FeetInch_H

class FeetInch
{
	private:
		int feet,inches;
		void simplify();
	public:
		FeetInch(int feet=0,int inches=0)
		{
			this->feet=feet;
			this->inches=inches;
			simplify();
		}
		int getFeet() const
		{
			return feet;
		}
		int getInches() const
		{
			return inches;
		}
		bool operator > (const FeetInch &);
		bool operator < (const FeetInch &);
		bool operator == (const FeetInch &);
};
#endif


