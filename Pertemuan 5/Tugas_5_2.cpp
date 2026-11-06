#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main() {
    int tinggi;

    cout << "==================== Program Segitiga Bintang ====================" << endl;
    cout << endl;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi;
    cout << endl;

    for (int i = 1; i <= tinggi; i++) {
        for (int s = 1; s <= tinggi - i; s++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
