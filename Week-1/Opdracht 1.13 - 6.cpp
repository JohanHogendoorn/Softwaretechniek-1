//e+38 betekent tot de macht 38. In dit programma worden twee floats bij elkaar opgeteld die groter zijn dan de float datatype.
//De uitkomst is inf.

#include <iostream>


using namespace std;


int main() {


	float a = 3.4e+38;
	float b = 4e+38;
	float c;


	c = a + b;

	cout << "Het antwoord op deze som is: " << '\n';
	cout << c;



}