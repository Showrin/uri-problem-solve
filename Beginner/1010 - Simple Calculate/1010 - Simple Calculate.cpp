#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int id,unit;
    double price,total=0;

    cin >> id >> unit >> price;
    total = total + (unit*price);
    cin >> id >> unit >> price;
    total = total + (unit*price);

    printf("VALOR A PAGAR: R$ %0.2lf\n",total);

    return 0;
}
