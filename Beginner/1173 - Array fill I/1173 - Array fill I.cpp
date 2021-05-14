#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x[10],i,v;

    cin >> v;
    x[0]=v;
    cout << "N[0] = " << x[0] << endl;

    for (i=1;i<=9;i++)
    {
        x[i] = x[i-1]*2;
        cout << "N[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
