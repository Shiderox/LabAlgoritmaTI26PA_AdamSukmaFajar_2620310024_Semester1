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
    double radius,tall;
    cout << "----- Program menghitung Volume Tabung -----" << endl << endl;
    cout << "Masukkan jari-jari nya (cm): ";
    cin >> radius;
    
    cout << "Masukkan tinggi nya (cm): ";
    cin >> tall;

    double volume = pi * radius * radius * tall;
    cout << "Volume Tabungnya (cm^3): " << volume ;
}