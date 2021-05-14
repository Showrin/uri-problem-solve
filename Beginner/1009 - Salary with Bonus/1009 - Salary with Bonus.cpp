#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a,b,x;
    char n[40];

    cin >> n >> a >> b;
    x = a + (b*.15f);

    printf("TOTAL = R$ %0.2lf\n",x);

    return 0;
}
