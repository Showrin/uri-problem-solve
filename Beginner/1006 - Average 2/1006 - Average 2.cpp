#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a,b,c,x;

    cin >> a >> b >> c;
    x = (a*2.0f + b*3.0f + c*5.0f) / (2.0f+3.0f+5.0f);

    printf("MEDIA = %.1lf\n",x);

    return 0;
}
