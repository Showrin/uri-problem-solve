#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,x,y,i,j,k,sum;

    cin >> n;

    for (j=1;j<=n;j++)
    {
        cin >> x >> y;

        for (i=x,k=1,sum=0;k<=y;i++)
        {
            if (i%2!=0)
            {
                sum = sum+i;
                k++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
