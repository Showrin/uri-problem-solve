#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int i;
    double x,n[100];

    cin >> x;

    n[0]=x;
    printf("N[0] = %0.4lf\n",x);

    for (i=1;i<100;i++)
    {
        x=x/2;
        printf("N[%d] = %0.4lf\n",i,x);
    }

    return 0;
}
