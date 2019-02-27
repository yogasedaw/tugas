#include <iostream>

using namespace std;

int main ()
{
    int isi[10] = {56,24,25,23,30,96,100,16,34,30};
    int cari,jumlah=0;
    int indeks[10];
    int i,j;

    cout << "Masukan Data yang ingin dicari : ";
    cin >> cari;

    for (i=0; i<10; i++)
    {
        if (isi[i] == cari)
        {
            indeks[jumlah]=i;
            
            jumlah=jumlah+1;

        }
    }
    cout << "Jumlah data : "<<jumlah<<endl;
    cout << "Indeks ke - ";

    for (j=0; j<jumlah; j++)
    {
            cout << indeks[j]<<" ";
    }
    return 0;
}

