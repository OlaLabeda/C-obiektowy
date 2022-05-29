#include <iostream>
using namespace std;

class Samochody
{
	public:
	string marka;
	string model;
	int rocznik;
	int przebieg;
	
	void wczytaj()
	{
		cout << "Podaj marke: ";
		cin >> marka;
		cout << "Podaj model: ";
		cin >> model;
		cout << "Podaj rocznik: ";
		cin >> rocznik;
		cout << "Podaj przebieg: ";
		cin >> przebieg;
	}
	
	void wypisz()
	{
		cout << "Marka: " << marka << "\n";
		cout << "Model: " << model << "\n";
		cout << "Rocznik: " << rocznik << "\n";
		cout << "Przebieg: " << przebieg << "\n";
	}
	
};

int main ()
{
	Samochody s1, s2;
	s1.wczytaj();
	s1.wypisz();
	s2.wczytaj();
	s2.wypisz();
	return 0;
}
