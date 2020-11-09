//class specification file contents of  budget.h

#ifndef BUDGET_H //include guard //if not defined (ifndef)
#define BUDGET_H
class Budget{
	private:
		static double corpBudget;
		double divisionBudget;
	
	public:
		Budget();
		void addBudget(double b);
		double getDivisionBudget() const;
		double getCorpBudget() const;
		static void mainOffice(double);
		friend double friendFunction(Budget);
};
#endif
