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
        cout << "1. Tentukan Bilangan Genap" << endl;
        cout << "2. Tentukan Bilangan Ganjil" << endl;
        cout << "3. Tentukan Bilangan Prima" << endl;
        cout << "4. Hentikan Program" << endl;

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
                cout << x << " Bukan bilangan Genap" << endl;
            }
        }

        if (choice == 2)
        {
            int x;
            cout << "Masukkan bilangan: ";
            cin >> x;
            if (x % 2 != 0)
            {
                cout << x << " Adalah bilangan Ganjil" << endl;
            }
            else
            {
                cout << x << " Bukan bilangan Ganjil" << endl;
            }
        }

        if (choice == 3)
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

        if (choice == 4)
        {
            break;
        }
    }
}