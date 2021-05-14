#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    float m[12][12],sum=0;
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

    for (i=1;i<12;i++)
    {
        for (j=0;j<i;j++)
        {
            sum = sum+m[i][j];
            c++;
        }
    }

    if (t=='S')
        printf("%0.1f\n",sum);
    else
        printf("%0.1f\n",sum/c);

    return 0;
}
