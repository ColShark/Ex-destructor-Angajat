#include <iostream>
#include <string>

class Angajat
{
public:
	std::string nume;
	int varsta;
	float salariu;

	Angajat();
	~Angajat();
};

int main()
{
	Angajat a;
	a.~Angajat();

	system("pause");
}

Angajat::Angajat()
{
	nume = "Popescu Ion";
	varsta = 42;
	salariu = 3.125;

	std::cout << "Date" << std::endl;
	std::cout << std::endl;
	std::cout << "Nume: " << nume << std::endl;
	std::cout << "Varsta: " << varsta << std::endl;
	std::cout << "Salarius (RON): " << salariu << std::endl;
}

Angajat::~Angajat()
{
	std::cout << "Angajatul cu datele de mai sus a demisionat." << std::endl;
}