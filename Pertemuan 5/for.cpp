#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main ()
{
    int a,b;

cout << "Masukan batas nilai akhir deret bilangan ganjil: ";

cin >> b;

for(a=1; a <= b; a+=2)

cout << a << " ";

getchar();
}