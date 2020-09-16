#include <iostream>
#include <windows.h>
#include <iomanip>

void masodikora()
{
    
    cout << "Elso feladat" << endl;
    int a;
    string nev;

    cout << "Hány éves vagy: " << endl;
    cin >> a;

    cout << "Mi a neved" << endl;
    cin.sync();
    getline(cin, nev);

    cout << endl << nev << " " << a;

    Sorhatar();
    

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
    cout << "Negyedik feladat" << endl;

    int a = 39;
    float b = 56.805;

    cout << a << "-es szám: " << endl;
    cout << "tizes számrendszerben: \t\t\t" << dec << a << endl;
    cout << "nyolcas számrendszerben: \t\t" << oct << a << endl;
    cout << "tizenhatos számrendszerben: \t\t" << hex << a << endl << endl;

    cout << b << "-es szám: " << endl;
    cout << "tizedes tört alakja: \t" << fixed << setprecision(6) << b <<  endl;
    cout << "exponenciális alakja: \t" << scientific << b << endl;
    
    Sorhatar();

}
