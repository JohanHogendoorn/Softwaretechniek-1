#include <iostream>


using namespace std;


int main() {

	const int maanden = 12; 
	unsigned int maandsalaris;
	unsigned int jaarsalaris;

	cout << "Voer maandsalaris in: ";
	cin >> maandsalaris;
	cin.get();

	jaarsalaris = maanden * maandsalaris;

	cout << jaarsalaris << '\n';

}

