#include <iostream>

using namespace std;

int main()
{
    string Nama, Nim;
    int Usia;
    float ipk;

    cout << "Masukkan Nama : ";
   cin >> Nama;
   cout << "masukkan usia : ";
    cin >> Usia;


       for (int i = 0; i <= Usia; i++){
     cout << Nama << "\n";
   }

   cout << "\n";

    cout << "Masukkan Nama : ";
    cin >> Nama;
    cout << "masukkan usia : ";
    cin >> Usia;

      int i = 0;

    do {
        cout << Nama << endl;
        i++;
    } while (i < Usia);

    return 0;
}
