#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main()
{
    int x=50;

    int a,b,c,d,e;
// proses
    a=x>5+5;

    b=x>100;

    c = a && b;

    d= a || b;

    e =! (c);

// output berupa 1 (benar) dan 0 (salah)

    cout << "\nNilai a=x>5+5=" << a << endl; // Benar (1) ,Karena x = 50 ,sehingga x > 10 itu benar / memenuhi

    cout << "\nNilaib=x>100=" << b << endl; // Salah (0) ,Karena x = 50 ,sehingga x> 100 itu salah / tidak memenuhi / tidak sesuai

    cout << "\nNilai c=a && b=" << c << endl; // Salah (0) ,Karena a & b itu hanya a nya yang memenuhi ,sedangkan AND(&&) itu kondisinya harus dua duanya benar/memenuhi

    cout << "\nNilai d=a || b=" << d << endl; // Benar (1) ,Karena a OR b itu artinya diantara a & b hanya perlu salah satunya benar untuk menghasilkan output true (1) ,karena a adalah benar maka outputnya sudha pasti benar

    cout << "\nNilai e =! (c)=" << e << endl; // Benar (1) ,Karena pada gerbang logika NOT jika 1 maka jadi 0 ,jika 0 maka jadi 1, c (0) ,maka not c = 1

    getchar();
}