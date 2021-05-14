#include <iostream>
#include <cstdio>
#include <cmath>


using namespace std;

int main()
{
    int x,y,time=0;

    cin >> x >> y;

    if (x>=y)
    {
        time = 24-x;
        time = time+y;
    }

    else
    {
        time = y-x;
    }

    cout << "O JOGO DUROU " << time << " HORA(S)" << endl;

    return 0;
}
