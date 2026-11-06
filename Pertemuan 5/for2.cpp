#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int a, i, j, k;
    cout << "Input lebar belah ketupat: ";
    cin >> a;
    cout << endl;


    for (i = 1; i <= a; i++)
    {
        for (j = 1; j <= a - i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }

    
    for (i = 1; i < a; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (k = 1; k <= a - i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}