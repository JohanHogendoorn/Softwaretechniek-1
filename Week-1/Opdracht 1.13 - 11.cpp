#include <iostream>


using namespace std;


int main() {

	
	unsigned int prijs_product;
	const double btw = 0.21; 
	unsigned int btw_prijs;
	unsigned int prijs_product_btw;
	
	cout << "Voer een prijs van een product in, exclusief btw: ";
	cin >> prijs_product;
	cin.get();

	btw_prijs = btw * prijs_product;
	prijs_product_btw = btw_prijs + prijs_product;

	cout << "De btw van dit product is: ";
	cout << btw_prijs << '\n';
	cout << "De prijs van het product inclusief btw is: ";
	cout << prijs_product_btw << '\n';
}