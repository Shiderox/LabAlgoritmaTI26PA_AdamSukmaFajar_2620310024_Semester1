#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int x, bil = 0;
    cout << "Masukkan bilangan pembatas akhir : ";
    cin >> x;

    do
    {
        if (bil >= x)
        break;
        cout << bil << " ";
    } 
    while (bil+=4);

    cout << endl;
    getchar();
    
}