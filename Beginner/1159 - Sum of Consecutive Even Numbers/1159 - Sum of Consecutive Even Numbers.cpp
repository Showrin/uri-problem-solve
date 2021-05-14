#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x,i,k,sum;

    while (scanf("%d",&x) && x!=0)
    {
        for (i=x,k=1,sum=0;k<=5;i++)
        {
            if (i%2==0)
            {
                sum = sum+i;
                k++;
            }
        }

        cout << sum << endl;
    }

    return 0;
}
