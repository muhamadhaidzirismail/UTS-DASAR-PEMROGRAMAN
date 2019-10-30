#include <iostream>
using namespace std;

int main() {
    int bilangan;

    cout << "Masukan sebuah bilangan bulat (1-3): ";
    cin >> bilangan;

    switch (bilangan) {
        case 1:
             cout << "One" << endl;
             break;
        case 2:
             cout << "Two" << endl;
        case 3:
             cout << "Three" << endl;
             break;
        default:
             cout << "Saya banyak kenal 1, 2, 3 saja" << endl;
    }
    return 0;
}
