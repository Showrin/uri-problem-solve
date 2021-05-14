#include <iostream>
#include <cstdio>
#define pi 3.14159

using namespace std;

int main()
{
    double r,v;

    cin >> r;
    v = (4.0/3)*pi*r*r*r;

    printf("VOLUME = %.3lf\n",v);

    return 0;
}
