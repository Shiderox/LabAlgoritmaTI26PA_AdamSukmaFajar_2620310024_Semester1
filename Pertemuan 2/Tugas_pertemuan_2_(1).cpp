#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main ()
{
    string Nama;
    string Npm;

    cout << "Masukkan Nama : ";
    getline(cin,Nama);
    cout << "Masukkan Npm : ";
    getline(cin,Npm);

    cout << "Nama : " << Nama << endl << "Npm : " << Npm << endl;
    
    return 0;
}