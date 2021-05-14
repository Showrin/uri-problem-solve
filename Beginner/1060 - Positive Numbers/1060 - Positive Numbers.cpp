 #include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    float a[6];
    int i,c;

    for (i=0,c=0;i<6;i++)
    {
        cin >> a[i];

        if (a[i]>0)
        {
            c++;
        }
    }

    cout << c << " valores positivos" << endl;

    return 0;
}
