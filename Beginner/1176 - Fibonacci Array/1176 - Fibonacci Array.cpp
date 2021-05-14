#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int i,t,v;
    unsigned long long int x[80],f1,f2;

    x[0]=f1=0;
    x[1]=f2=1;

    for (i=2;i<=70;i++)
    {
        x[i] = f1+f2;
        f1=f2;
        f2=x[i];
    }

    cin >> t;

    for (i=1;i<=t;i++)
    {
        cin >> v;

        cout << "Fib(" << v << ") = " << x[v] << endl;
    }

    return 0;
}
