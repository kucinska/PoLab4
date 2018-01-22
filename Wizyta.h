#pragma once
class Wizyta
{
public:
	int id_wizyty;
	int id_pacjenta;
	char data;
	int godzina;
	char zalecenie;

	Wizyta();
	~Wizyta();
	void wyswietlZalecenia(int);
};

