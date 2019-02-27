#include <iostream>
using namespace std;

int main()
{
    int i, n, f[100];
    f[1]=1;
    f[0]=0;

    cout << "masukkan batas deret : ";
    cin >> n;

    cout << "Deret Fibonacci : ";

    for (i = 2; i < n; ++i)
    {
    	f[i] = f[i-2]+f[i-1];
        cout << f[i] << " ";
    }
    return 0;
}
