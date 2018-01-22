#pragma once
class Pacjent
{
public:
	int id_pacjenta;
	char imie;
	char nazwisko;
	int pesel;
	char haslo;

	void wyswietlDane();
	Pacjent();
	~Pacjent();
};

