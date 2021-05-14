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

        i=1;
        sum=0;

        while (i<x)
        {
            if (x%i==0)
                sum = sum+i;

            i++;
        }

        if (sum==x)
            cout << x << " eh perfeito" << endl;
        else
            cout << x << " nao eh perfeito" << endl;
    }

    return 0;
}
