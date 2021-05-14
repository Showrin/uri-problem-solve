#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int km;
    double ltr,consmptn;

    cin >> km >> ltr;
    consmptn = km/ltr;

    printf("%0.3lf km/l\n",consmptn);

    return 0;
}
