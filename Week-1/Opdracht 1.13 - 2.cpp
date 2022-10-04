//Bij uitvoeren van programma wordt a negatief, wordt namelijk -2147483638

#include <iostream>

using namespace std;


int main()
{
	int a = 2147483647;
	a++;

	cout << a << '\n';

}