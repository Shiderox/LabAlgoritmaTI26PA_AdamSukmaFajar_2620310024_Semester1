#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main ()
{
    short nilai1,nilai2,nilai3;
    float nilairatarata;
    string nama;

    cout << "Program menghitung rata-rata" <<endl;
    cout << "Nama Siswa : ";
    getline(cin,nama);

    cout << "Nilai I : ";
    cin >> nilai1;
    cout << "Nilai II : ";
    cin >> nilai2;
    cout << "Nilai III : ";
    cin >> nilai3;

    nilairatarata = (nilai1 + nilai2 + nilai3) / 3.0;

    if (nilairatarata >= 85)
    {
        cout << "Nama : " << nama << std::endl;
        cout << "Nilai I : " << nilai1 << std::endl;
        cout << "Nilai II : " << nilai2 << std::endl;
        cout << "Nilai III : " << nilai3 <<std::endl;
        cout << "Nilai rata-rata : " << nilairatarata << std::endl;
        cout << "Dapat Komputer i5";
    }
    else if (nilairatarata >= 70)
    {
        cout << "Nama : " << nama << std::endl;
        cout << "Nilai I : " << nilai1 << std::endl;
        cout << "Nilai II : " << nilai2 << std::endl;
        cout << "Nilai III : " << nilai3 <<std::endl;
        cout << "Nilai rata-rata " << nilairatarata << std::endl;
        cout << "Dapat Uang Tunai 2.500.000 Rupiah";
    }
    else if (nilairatarata < 70)
    {
        cout << "Nama : " << nama << std::endl;
        cout << "Nilai I :" << nilai1 << std::endl;
        cout << "Nilai II :" << nilai2 << std::endl;
        cout << "Nilai III :" << nilai3 <<std::endl;
        cout << "Nilai rata-rata : " << nilairatarata << std::endl;
        cout << "Dapat Hadiah Liburan";
    }



    
    return 0;

    

}