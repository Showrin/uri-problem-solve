#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int x,y,a,b,time_h=0,time_m=0,time=0;

    cin >> x >> a >> y >> b;

    x = (x*60)+a;
    y = (y*60)+b;

    if (x>=y)
    {
        time = (24*60)-x;
        time = time+y;
    }

    else
    {
        time = y-x;
    }

    time_h = time/60;
    time_m = time%60;

    cout << "O JOGO DUROU " << time_h << " HORA(S)" << " E " << time_m << " MINUTO(S)"<< endl;

    return 0;
}
