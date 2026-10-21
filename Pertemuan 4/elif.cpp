#include <iostream>
using namespace std;
int main()
{
 double tot_beli, potongan=0, jum_bayar=0;
 cout<<"Total Pembelian Rp. ";
 cin>>tot_beli;
 if (tot_beli >= 100000)
    {
        potongan = 0.25 * tot_beli;
    }
 else if (tot_beli >=50000)
    {
        potongan = 0.20 * tot_beli;
    }
 else 
    {
        potongan = 0.05 * tot_beli;
    } 
    cout<<"Besarnya Potongan Rp. "<<potongan<<endl;
    jum_bayar = tot_beli - potongan;
    cout<<"Jumlah yang harus dibayarkan Rp. "<<jum_bayar;
    getchar();
    return 0;
}