#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int number = 0;
    int sum = 0;

    do
    {
        sum +=number;
        cout << "(Input 0 untuk finish) Masukkan angka: ";
        cin >> number;
    } while (number >=1);
    
    cout << "\n Hasil penjumlahannya adalah " << sum << endl;
    getchar();
}