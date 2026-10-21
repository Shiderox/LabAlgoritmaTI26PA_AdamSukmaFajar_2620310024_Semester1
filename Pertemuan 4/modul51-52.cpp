#include <iostream>
using namespace std;
int main()
{
 double total_beli, discount=0, jumlah_bayar=0;
 cout<<"Total Pembelian Rp. ";
 cin>>total_beli;
 if (total_beli >= 50000)
 discount = 0.2 * total_beli;
 cout<<"Besarnya Potongan Rp. "<<discount<<endl;
 jumlah_bayar = total_beli - discount;
 cout<<"Jumlah yang harus dibayarkan Rp. "<<jumlah_bayar;
 getchar();
}
