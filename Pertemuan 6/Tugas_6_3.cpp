#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main ()
{
    int a = 3, b = 2, c = 1, bil;

    cout << "|\tBil-A\t|\tBil-B\t|\tBil-C\t|" << endl;
    cout << "_________________________________________________  "<<endl;

    for (bil = 1; bil <= 100 ; bil++)
    {
        a = a+b;
        b = b+c;
        c = c+2;

        cout << "|\t" << a << "\t|" << "\t" << b << "\t|" << "\t" << c<< "\t|" << endl;
        if (c == 13)
        {
            break;
        }
    }
    
}