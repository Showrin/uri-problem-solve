#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,x,y,i,j,sum=0;

    cin >> n;

    for (j=1;j<=n;j++)
    {
        cin >> x >> y;

        if (x>y)
            swap(x,y);

        for (i=x+1,sum=0;i<y;i++)
        {
            if (i%2!=0)
            {
                sum = sum+i;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
