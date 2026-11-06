#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main ()
{
    int a,b;
    char lagi;
    atas:

    cout << "===== Program Menghitung Modulus 2 ===== " << endl;
    cout << "Masukkan Bilangan: ";
    cin >> a;
    b = a % 2;
    cout << "Nilai Dari " << a << " % 2 " << "Adalah: " << b << endl;
    cout << "Lagi/Sudah?[y/t]" << endl;
    cin >> lagi;
    if (lagi == 'Y' || lagi == 'y')
    {
        goto atas;
    }
    else
    {
        return 0;
    }
    

    
}