#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    while (true)
    {
        cout << "========= Selamat Datang =========" << endl;
        cout << "1. Tentukan Bilangan Genap/Ganjil" << endl;
        cout << "2. Tentukan Bilangan Prima" << endl;
        cout << "3. Hentikan Program" << endl;

        int choice;
        cout << "Choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            int x;
            cout << "Masukkan bilangan: ";
            cin >> x;
            if (x % 2 == 0)
            {
                cout << x << " Adalah bilangan Genap" << endl;
            }
            else
            {
                cout << x << " Adalah bilangan Ganjil" << endl;
            }
        }


        if (choice == 2)
        {
            int i, j, cek = 0;
            cout << "Masukkan bilangan: ";
            cin >> i;

            for (j = 1; j <= i; j++)
            {
                if (i % j == 0)
                {
                    cek++;
                }
            }

            if (cek == 2)
            {
                cout << i << " Adalah bilangan Prima" << endl;
            }
            else
            {
                cout << i << " Bukan bilangan Prima" << endl;
            }
        }

        if (choice == 3)
        {
            break;
        }
    }
}