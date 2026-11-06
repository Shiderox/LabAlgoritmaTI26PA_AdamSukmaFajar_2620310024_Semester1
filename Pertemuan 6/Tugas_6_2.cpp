#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main ()
{
    int x = 0;
    int y = 0;
    for (int i = 1; i <= 20; i++)
    {
        if (i%2 != 0)
        {
            if (i!=1)
            {
                cout << "+ ";
            }
            cout << i << " ";
            
            x = x + i ;
        }
    }
    cout << " = " << x << endl;

    for (int i = 1; i <= 20; i++)
    {
        if (i%2 == 0)
        {
            if (i!=2)
            {
                cout << "+ ";
            }
            cout << i << " ";
            
            y = y + i ;
        }
    }
    cout << " = " << y;
    
}