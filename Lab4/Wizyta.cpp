#include "stdafx.h"
#include "Zalecenia.h"
#include "Wizyta.h"

using namespace std;
int x = 1;

Wizyta::Wizyta()
{
	cout << "\n Podaj id pacjenta" << endl;
	cin >> id_pacjenta;
	cout << "\n Podaj date wizyty" << endl;
	cin >> data;
	cout << "\n Podaj godzine wizyty" << endl;
	cin >> godzina;
	this->id_wizyty = x;
	cout << "\n Podaj zalecenie" << endl;
	cin >> zalecenie;
	x=x+1;

}

void Wizyta::wyswietlZalecenia(int) {
	cout << "Zalecenia: " << zalecenie <<endl;
}
Wizyta::~Wizyta()
{
}
