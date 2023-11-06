#include <iostream>
using namespace std;
// sadanie 1 zapis do pliku txt linii czytanej z zklawiatury
int main()
{
    char znaki[100];
    fstream plik;
    plik.open("Michal.txt", ios::in | ios::out | ios::trunc);

    cout << "Podaj wpis: " << "\n";
    cin.getline(znaki, 100, "\n")

    plik << znaki;
   
    plik.close();
    system("pause")
    EXIT_SUCCESS;
}
