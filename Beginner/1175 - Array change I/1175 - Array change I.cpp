#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int x[20],i;

    for (i=19;i>=0;i--)
    {
        cin >> x[i];
    }

    for (i=0;i<=19;i++)
    {
        printf("N[%d] = %d\n",i,x[i]);
    }

    return 0;
}
