#include <iostream>


using namespace std;


int main() {

	const int dagen = 365;
	const int daguren = 24;
	const int minuten = 60;
	const int seconden = 60;

	unsigned int seconden_jaar;

	seconden_jaar = dagen * daguren * minuten * seconden;

	cout << seconden_jaar << '\n';
}