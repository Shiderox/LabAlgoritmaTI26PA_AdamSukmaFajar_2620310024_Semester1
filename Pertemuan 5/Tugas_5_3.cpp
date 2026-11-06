#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main() 
{
    cout << "Contoh Program perulangan" << endl;
    for (int i = 1; i <= 10; i++) 
    {
        cout << i << endl;
    }

    cout << endl;

    cout << "Perulangan menurun" << endl;
    for (int i = 10; i >= 1; i--) 
    {
        cout << i << endl;
    }

    return 0;
}
