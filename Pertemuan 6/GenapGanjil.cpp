#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int angka [10];

    cout << "Masukkan 10 bilangkan: " << endl;
    for (int i=0;i<10;i++)
    {
        cout << "Nilai ke - " << i + 1 << ": ";
        cin >> angka [i];
    }

    cout << "\nBilangan Genap: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if(angka[i] % 2 == 0)
        cout << angka [i] << " ";
    }

    cout << "\nBilangan ganjil: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (angka[i] % 2 != 0)
        cout << angka [i] << " ";
    }
    
    cout << endl;
    return 0;
}   
