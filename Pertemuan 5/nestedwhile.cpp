#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int a,b = 5;
    while (b>=1)
    {
        a=1;

        while (a <= b)
        {
            cout << a*b << " ";
            a++;
        }
        cout << "\n";
        b--;
    }
}