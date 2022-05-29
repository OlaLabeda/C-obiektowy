#include <iostream>
using namespace std;

class Zwierzatka
{
	public: 
	
	//atrybuty -> cechy ktore posiada obiekt
	string gatunek;
	string imie;
	int wiek;
	
	//metody -> funkcje i procedury wewnatrz klas
	void dodaj_zwierze()
	{
		cout << "DODAWANIE NOWEGO ZWIERZECIA DO BAZY: \n";
		cout << "Podaj gatunek: ";
		cin >> gatunek;
		cout << "Podaj imie: ";
		cin >> imie;
		cout << "Podaj wiek: ";
		cin >> wiek;
	}
	
	void daj_glos()
	{
		if (gatunek == "kot")
			cout << imie << " lat " << wiek << ": Miau!";
		else if (gatunek == "koza")
			cout << imie << " lat " << wiek << ": Bee!";
		else if (gatunek == "krowa")
			cout << imie << " lat " << wiek << ": Muu!";
		else 
			cout << "Nieznany gatunek :(";	
	}
};

int main() 
{
	Zwierzatka z1, z2, z3;
	z1.dodaj_zwierze();
	z1.daj_glos();
	z2.dodaj_zwierze();
	z2.daj_glos();
	
	return 0;
}
