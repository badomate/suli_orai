#include <iostream>
#include <windows.h>
#include <iomanip>

void masodikora()
{
    /*
    cout << "Eso feladat" << endl;
    int a;
    string nev;

    cout << "Hány éves vagy: " << endl;
    cin >> a;

    cout << "Mi a neved" << endl;
    cin.sync();
    getline(cin, nev);

    cout << endl << nev << " " << a;

    Sorhatar();
    */

    //tiezedesd jelek, elég egyszer beirni
    cout << fixed << setprecision(2);
    cout << setw(8) << 1.0 << " " << setw(8) << 1.0*0.25 << endl;
    cout << setw(8) << 12 << " " << setw(8) << 12*0.5 << endl;
    cout << setw(8) << 2.0 << " " << setw(8) << 2.0*7.5 << endl;

    Sorhatar();

    cout << "Második feladat" << endl;

    float szam;
    szam = 28.01020;

    float masikSzam = szam; // ugyan annyi mint a szam, csak luista voltam bemasolni a szamt

    cout << fixed << setprecision(5);
    cout << setw(10) << setfill('0') << szam << endl;

    Sorhatar();

    cout << "Harmadik feladat" << endl;

    int ev = 2020;
    int ho = 9;
    int nap = 16;

    cout << "Dátum: " << endl;
    cout << setfill('0');
    cout << ev << "." << setw(2) << ho << "." << setw(2) << nap << "." << endl;
    
    Sorhatar();

}
