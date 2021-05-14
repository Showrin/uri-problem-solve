#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    float a[6],sum=0;
    int i,c;

    for (i=0,c=0;i<6;i++)
    {
        cin >> a[i];

        if (a[i]>0)
        {
            c++;
            sum = sum+a[i];
        }
    }

    cout << c << " valores positivos" << endl;
    printf("%0.1f\n",(sum/c));

    return 0;
}
