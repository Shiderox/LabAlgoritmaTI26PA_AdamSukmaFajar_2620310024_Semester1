#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int a,bil =1;

    cout << "Masukkan bilangan pembatas akhir = ";
    cin >> a;

    while (bil <= a)
    {
        cout << bil << " ";
        bil ++;
    }
    cout << endl;
    getchar();
}