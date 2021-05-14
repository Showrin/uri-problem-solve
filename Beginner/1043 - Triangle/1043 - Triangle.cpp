#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    float a,b,c;

    cin >> a >> b >> c;

    if (a+b>c && b+c>a && c+a>b)
    {
        printf("Perimetro = %0.1f\n",(a+b+c));
    }

    else
        printf("Area = %0.1f\n",(0.5f*(a+b)*c));

    return 0;
}
