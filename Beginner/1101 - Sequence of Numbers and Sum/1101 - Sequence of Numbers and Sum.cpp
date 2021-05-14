#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int m,n,sum=0,i;

    while (scanf("%d",&m)!=0 && m>0 && scanf("%d",&n)!=0 && n>0)
    {
        if (n>m)
            swap(m,n);

        for (i=n;i<=m;i++)
        {
            cout << i << " ";
            sum = sum+i;
        }

        cout << "Sum=" << sum << endl;
        sum = 0;
    }

    return 0;
}
