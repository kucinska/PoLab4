#pragma once
class Admin
{
public:
	int id_admin;
	const char* haslo;

	void dodajPacjenta();
	void dodajWizyte();
	Admin(int, const char*);
	~Admin();
};

