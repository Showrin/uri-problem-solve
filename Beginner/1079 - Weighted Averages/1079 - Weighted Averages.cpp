#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    int n,i;
    float x,y,z;

    cin >> n;

    for (i=1;i<=n;i++)
    {
        cin >> x >> y >> z;

        printf("%0.1f\n",((x*2)+(y*3)+(z*5))/(2+3+5));
    }

    return 0;
}
