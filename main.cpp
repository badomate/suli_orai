
#include <iostream>

using namespace std;

 int main()
  {
      //elosora();
      int a;
      string nev;

      cout << "Hány éves vagy: " << endl;
      cin >> a;

      cout << "Mi a neved" << endl;
      cin.sync();
      getline(cin, nev);

      cout << endl << nev << " " << a;


  }

