#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,x,i,j,sum;

    cin >> n;

    for (j=1;j<=n;j++)
    {
        cin >> x ;

        i=2;

        while (i<x)
        {
            if (x%i==0)
            {
                break;
            }

            i++;
        }

        if (i==x)
            cout << x << " eh primo" << endl;
        else
            cout << x << " nao eh primo" << endl;
    }

    return 0;
}
