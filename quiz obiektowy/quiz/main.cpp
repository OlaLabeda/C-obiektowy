#include <iostream>
#include "pytanie.h"

using namespace std;

int main()
{
    Pytanie p[5]; // 5 obiektow - 5 pytan numerowane od 0
    int ilepkt = 0;
    for (int i = 0; i < 5; i++)
    {
        p[i].nr_pytania = i+1;
        p[i].wczytaj();
        p[i].zadaj();
        p[i].sprawdz();
        ilepkt += p[i].punkt;
    }

    cout << "KONIEC QUIZU! PUNKTY = " << ilepkt;
    return 0;
}
