#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int a[5];
    int i,e=0,o=0,p=0,n=0;

    for (i=0;i<5;i++)
    {
        cin >> a[i];

        if (a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }

        if (a[i]>0)
        {
            p++;
        }

        if (a[i]<0)
        {
            n++;
        }
    }

    cout << e << " valor(es) par(es)" << endl;
    cout << o << " valor(es) impar(es)" << endl;
    cout << p << " valor(es) positivo(s)" << endl;
    cout << n << " valor(es) negativo(s)" << endl;

    return 0;
}
