#include <iostream>
#include <cstdio>
#define pi 3.14159

using namespace std;

int main()
{
    double a,b,c,area;

    cin >> a >> b >> c;

    area = 0.5f*a*c;
    printf("TRIANGULO: %.3lf\n",area);

    area = pi*c*c;
    printf("CIRCULO: %.3lf\n",area);

    area = 0.5f*(a+b)*c;
    printf("TRAPEZIO: %.3lf\n",area);

    area = b*b;
    printf("QUADRADO: %.3lf\n",area);

    area = a*b;
    printf("RETANGULO: %.3lf\n",area);

    return 0;
}
