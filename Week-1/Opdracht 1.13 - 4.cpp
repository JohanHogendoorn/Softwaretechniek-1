//Als je een negatieve waarde in de unsigned int opbergt, geeft dit programma het maximale aan min de 3. Dus 
// het programma levert 4294967292 op.

#include <iostream>

using namespace std;


int main()
{
	
	unsigned int c = -4;
	

	c++;

	cout << c << '\n';


}