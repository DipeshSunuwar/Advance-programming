#include "feetinch.h"
#include<cmath>
void FeetInch::simplify()
{
	if(inches>= 12)
	{
		feet = feet + (inches/12);
		inches = inches%12;	
	}		
	elseif(inches<0)
	{
		feet = feet - ((abs(inches)/12)+1);
		inches = 12 - (abs(inches)%12);
	}
}
bool FeetInch :: operator> (const FeetInch &right)
{
	bool status;
	if(feet>right.FeetInch)
		status = true;
	else if(feet == right.feet && inches > right.inches)
		status = true;
	else
		status = false;
	return status;
}
