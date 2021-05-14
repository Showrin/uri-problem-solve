#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int time,speed;
    double ltr;

    cin >> time >> speed;
    ltr = (time*speed)/12.0f;

    printf("%0.3lf\n",ltr);

    return 0;
}
