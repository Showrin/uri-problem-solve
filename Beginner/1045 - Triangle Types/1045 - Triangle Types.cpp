#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

int main()
{
    double a,b,c;

    cin >> a >> b >> c;

    if (a<b)
        swap(a,b);
    if (a<c)
        swap(a,c);
    if (b<c)
        swap(b,c);

    if (a>=(b+c))
    {
        cout << "NAO FORMA TRIANGULO" << endl;
        return 0;
    }
    if (pow(a,2)==(pow(b,2)+pow(c,2)))
        cout << "TRIANGULO RETANGULO" << endl;
    if (pow(a,2)>(pow(b,2)+pow(c,2)))
        cout << "TRIANGULO OBTUSANGULO" << endl;
    if (pow(a,2)<(pow(b,2)+pow(c,2)))
        cout << "TRIANGULO ACUTANGULO" << endl;
    if (a==b && b==c)
        cout << "TRIANGULO EQUILATERO" << endl;
    if ((a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b))
        cout << "TRIANGULO ISOSCELES" << endl;

    return 0;
}
