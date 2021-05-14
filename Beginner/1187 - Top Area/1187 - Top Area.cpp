#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    double m[12][12],sum=0;
    int i,j,c=0;
    char t;

    cin >> t;

    for (i=0;i<12;i++)
    {
        for (j=0;j<12;j++)
        {
            cin >> m[i][j];
        }
    }

    for (i=0;i<5;i++)
    {
        for (j=i+1;j<11-i;j++)
        {
            sum = sum+m[i][j];
            c++;
        }
    }

    if (t=='S')
        printf("%0.1lf\n",sum);
    else
        printf("%0.1lf\n",sum/c);

    return 0;
}
