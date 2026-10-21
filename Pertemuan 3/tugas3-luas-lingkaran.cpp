#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    const double pi =  3.14159265358979;
    double radius;
    cout << "----- Program menghitung Luas Lingkaran -----" << endl << endl;
    cout << "Masukkan jari-jari nya (cm): ";
    cin >> radius;

    double luas = pi * radius * radius;
    cout << "Luas Lingkarannya (cm^2): " << luas ;
}