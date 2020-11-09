/*Given the following code of simpleVector class to allocate values to an array pointer.
A constructor sets the size of the array and allocates memory for it.
The arraySize member variable is declared as int, regardless of the data type pf the array.
rewrite the following code into a class Template.*/

#include <iostream>
#include <new>
#include <cstdlib>

using namespace std;

template<typename T>

class SimpleVector
{
	private:
		T *aptr; //point to the allocated array
		int arraySize; //number of elements in the array
		void memError(); //Handles memory allocation errors
	public:
		SimpleVector() //default constructor
		{ aptr = 0; arraySize = 0; }
		SimpleVector(int) ; //Constructor declaration
		SimpleVector(const SimpleVector &) ;
		~SimpleVector() ; // Destructor declaration
		int size() const { return arraySize; }
		T getElementAt(int position) ; //to return an element
		T &operator [] (const int &) ; // Overloaded [] operator
	};
template <typename T>
SimpleVector<T> :: SimpleVector(int s) {
	arraySize = s;
	try { aptr = new int [s]; }
	catch(bad_alloc){ memError(); } //'bad_alloc' does not name a type
	for(int count = 0; count < arraySize; count++)
		*(aptr + count) = 0; 
}

template<typename T>

SimpleVector<T> :: SimpleVector(const SimpleVector &obj ) {
	arraySize = obj.arraySize;
	aptr = new int[arraySize];
	if(aptr == 0) memError(); //if Can't allocate memorY
	for(int count = 0; count < arraySize; count++)
		*(aptr + count) = *(obj.aptr + count);
}

template<typename T>
SimpleVector<T>::~SimpleVector(){
	if (arraySize > 0) delete [] aptr; 
}
template<typename T>

void SimpleVector<T>::memError ( ) { exit(EXIT_FAILURE); }

template<typename T>
T SimpleVector<T>::getElementAt(int sub) {
	if (sub < 0 || sub >= arraySize) //Subscript out of range
		exit(EXIT_FAILURE);
	return aptr[sub];
}

template<typename T>
T &SimpleVector::operator[] (const int &sub){
	if (sub < 0 || sub >= arraySize) //Subscript out of range
		exit (EXIT_FAILURE) ;
	return aptr[sub];
}

int main()
{
	SimpleVector <int>obj1(5);
	return 0;
}
