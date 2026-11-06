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
            if (x % 2 == 1)
            {
                cout << x <<" Adalah bilangan Ganjil";
            }
            else
            {
                cout << x << " Bukan bilangan Ganjil";
            }

        }

        if (choice == 2)
        {
            int x;
            cout << "Masukkan bilangan: ";
            cin >> x;
            if (x % 2 == 0)
            {
                cout << x << " Adalah bilangan Genap";
            }

        }

        if (choice == 3)
        {
            int i, j, cek;
            cout << "Masukkan bilangan: ";
            cin >> i;

            for(j=1; j <= i; j++)
                {
                    if(i%j == 0) 
                        {
                            cek++;
                        }

            if (cek<3) 
                {
                    cout << i  << " Adalah bilangan Prima";
                }
            
            else
                {
                    cout << i << " Bukan bilangan Prima";
                }
            cek=0;
        

        if (choice == 4)
        {
            break;
        }
    }    
}   
}