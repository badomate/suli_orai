#include <iostream>
#include <windows.h>
#include <iomanip>
#include <math.h>

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
    
    cout << "Ötödik feladat" << endl;

    int a, b;
    cout << "kérem az A változó értéket: " << endl;
    cin >> a;
    cout << "kérem a B váltrozó értéket: " << endl;
    cin >> b;
    cout << endl;

    cout << "Kérek két értéket" ;
    cin >> a >> b;

    cout << endl;
    cout << "A értéke 1-gyel növelve: " << a+1 << endl;
    cout << "A és B összege" << a+b << endl;
    cout << "Szorzatuk" << a*b << endl;
    cout << "Hányadosuk: " << a/b << endl;
    cout << "Maradék: " << a%b << endl;
    cout << "Valós osztás eredményük: " << (a + 0.0)/b;
    
    Sorhatar();
    
    cout << "Hatodik feladat" << endl;

    float fok, radian;
    cout << "Adja meg a szögmértéket fokban: " << endl;
    cin >> fok;

    radian = (fok/180)*M_PI;

    cout << "Szögmérték radiánban: " << fixed << setprecision(2) << radian << endl;
    
    Sorhatar();

    cout << "Hetedik feladat" << endl;

    float a, b, c, alfa;

    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;
    cout << "alfa = " << endl;
    cin >> alfa;

    cout << "A megoldas: " << keplet(a, b, c, alfa) << endl;




}
