#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x[2000],n,i,minm,pos;

    cin >> n;

    for (i=0;i<n;i++)
    {
        cin >> x[i];

        if (i==0)
        {
            minm = x[i];
            pos = i;
        }
        else
        {
            if (minm>x[i])
            {
                minm = x[i];
                pos = i;
            }
        }
    }

    cout << "Menor valor: " << minm << endl;
    cout << "Posicao: " << pos << endl;

    return 0;
}
