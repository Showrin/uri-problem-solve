#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double a,b,x;

    scanf("%.1lf %lf",&a,&b);
    //cin >> a >> b;
    x = (a*3.5f + b*7.5f) / (3.5f+7.5f);

    printf("MEDIA = %.5lf\n",x);

    return 0;
}
