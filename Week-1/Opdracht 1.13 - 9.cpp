#include <iostream>


using namespace std;


int main() {

	const int maanden = 12;
	unsigned int maandsalaris;
	unsigned int jaarsalaris;
	unsigned int vakantiegeld;

	cout << "Voer maandsalaris in: ";
	cin >> maandsalaris;
	cin.get();

	jaarsalaris = maanden * maandsalaris;
	vakantiegeld = jaarsalaris / 100 * 8; 

	cout << jaarsalaris << '\n';
	cout << vakantiegeld << '\n';

}

