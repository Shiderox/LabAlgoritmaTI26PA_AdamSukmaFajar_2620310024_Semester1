#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    char ulang;

    awal:
    cout << "Program perulangan menggunakan go to" << endl << endl;

    cout << "Ingin mengulang perintah (y/n) ? ";
    cin >> ulang;

    cout << endl;

    if (ulang == 'Y' || ulang == 'y')
    {
        goto awal;
    }
    if(ulang == 'N' || ulang == 'n')
    {
        goto akhir;
    }
    akhir:

    return 0;
}