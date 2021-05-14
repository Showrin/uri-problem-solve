#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int i;
    float x[100];

    for (i=0;i<=99;i++)
    {
        cin >> x[i];

        if (x[i]<=10)
            printf("A[%d] = %0.1f\n",i,x[i]);
    }

    return 0;
}
