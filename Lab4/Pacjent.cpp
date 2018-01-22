#include "stdafx.h"
#include "Pacjent.h"

using namespace std;
int y = 2000;

Pacjent::Pacjent()
{
	this->id_pacjenta = y;
	y = y + 2;
	cout << "Podaj imie pacjenta" << endl;
	cin >> imie;
	cout << "Podaj nazwisko pacjenta" << endl;
	cin >> nazwisko;
	cout << "Podaj pesel pacjenta" << endl;
	cin >> pesel;
	cout << "Podaj haslo pacjenta" << endl;
	cin >> haslo;
}


Pacjent::~Pacjent()
{
}

void Pacjent::wyswietlDane() {
	cout << "Imie: " << imie << "\n Nazwisko: " <<nazwisko << "\n Pesel: " <<pesel << "\n id: " << id_pacjenta << endl;
}
