#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    float m[12][12],sum=0,avg;
    int i,j,l;
    char t;

    cin >> l;
    cin >> t;

    for (i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            cin >> m[i][j];
        }
    }

    for (i=0,j=l;i<12;i++)
    {
        sum = sum+m[i][j];
    }

    if (t=='S')
        printf("%0.1f\n",sum);
    else
        printf("%0.1f\n",sum/12);

    return 0;
}
