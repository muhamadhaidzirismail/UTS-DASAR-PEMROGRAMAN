// program: cin.cpp
#include <iostream>
using namespace std;

int main() {
    double panjang, lebar, keliling;

    cout << "Menghitung keliling persegi panjang" << endl;
    cout << "panjang: ";
    cin >> panjang;

    cout << "lebar: ";
    cin >> lebar;

    keliling = 2 * (panjang + lebar);

    cout << "keliling = " << keliling << endl;

    return 0;
}
