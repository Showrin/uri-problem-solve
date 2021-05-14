#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int t,y,j,pa,pb;
    double ga,gb;

    cin >> t;

    for (j=1;j<=t;j++)
    {
        cin >> pa >> pb >> ga >> gb;

        y=0;

        while (pa<=pb)
        {
            y++;

            pa = pa+pa*ga/100;
            pb = pb+pb*gb/100;

            if (y>100)
            {
                cout << "Mais de 1 seculo." << endl;
                break;
            }
        }

        if (y<=100)
            cout << y << " anos." << endl;
    }

    return 0;
}
