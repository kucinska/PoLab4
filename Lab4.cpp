// Lab4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;

int main()
{
	Admin admin1(1000, "admin");
	int id;
	int i;
	string haslo;
	cout << "Podaj id" << endl;
	cin >> id;
	cout << "podaj haslo " << endl;
	cin >> haslo;
	if (id == 1000 && haslo == "admin") {
		int wybor;
		cout << "Zalogowano jako admin";
		do {
			cout << "\nMENU\n";
			cout << "1. Dodaj Pacjenta\n";
			cout << "2. Dodaj wizyte i zalecenia\n";
			cout << "3. Wylicz statystyke zalecen na pacjenta" << endl;
			cout << "4. Wylicz statystyke wizyty na pacjenta" << endl;
			cin >> wybor;
			if (wybor == 1) {

			}else if (wybor == 2) {

			}else if (wybor == 3) {

			}else if (wybor == 4) {

			}else{
				cout << "\nwybierz inna opcje\n";
				cin >> wybor;
			}
		} while (wybor != 0);
	}
	Sleep(5000);

    return 0;
}

