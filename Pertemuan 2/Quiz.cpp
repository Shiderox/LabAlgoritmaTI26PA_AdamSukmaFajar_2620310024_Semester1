#include <iostream>
#include <conio.h>
#define harga 4500.02
using namespace std;

int main ()
{
    float jumlah,total;
    cout << " Masukan jumlah barang = \n";
    cin >> jumlah;
    total=harga*jumlah;
    cout << "\n Yang harus dibbayar = "<< total;

    return 0;
}

